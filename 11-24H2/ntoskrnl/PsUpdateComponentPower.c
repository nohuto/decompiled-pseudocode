/*
 * XREFs of PsUpdateComponentPower @ 0x14041F720
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1408D85E4 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessEnergyTrackingStateCallback @ 0x140A77D70 (PspSetProcessEnergyTrackingStateCallback.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x14099B564 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PsUpdateComponentPower(PEPROCESS a1, unsigned int a2, unsigned __int64 a3)
{
  struct _LIST_ENTRY *Flink; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  volatile signed __int64 *v6; // r10
  signed __int64 v7; // rax
  unsigned int v8; // r9d
  bool v9; // cc
  signed __int64 v10; // rtt
  signed __int64 v11; // [rsp+30h] [rbp+8h]

  if ( !a1 || a1 == PsIdleProcess )
    a1 = PsInitialSystemProcess;
  Flink = a1[3].ProcessListEntry.Flink;
  if ( Flink )
  {
    if ( a2 == 1 )
    {
      if ( !a3 )
        return;
      v4 = 280LL;
      v5 = 64LL;
    }
    else if ( a2 == 2 )
    {
      if ( !a3 )
        return;
      _InterlockedAdd64((volatile signed __int64 *)&Flink[4].Blink, HIDWORD(a3));
      a3 = (unsigned int)a3;
      v5 = 88LL;
      v4 = 288LL;
    }
    else
    {
      switch ( a2 )
      {
        case 3u:
          if ( !a3 )
            return;
          _InterlockedAdd64((volatile signed __int64 *)&Flink[5], HIDWORD(a3));
          a3 = (unsigned int)a3;
          v4 = 296LL;
          v5 = 96LL;
          break;
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
          PoEnergyContextUpdateComponentPower(a1, a2);
          return;
        default:
          __fastfail(0x25u);
      }
    }
    v6 = (volatile signed __int64 *)((char *)Flink + v4);
    _InterlockedAdd64((volatile signed __int64 *)((char *)Flink + v5), a3);
    if ( (struct _LIST_ENTRY *)((char *)Flink + v4) )
    {
      v7 = *v6;
      v8 = KiTimelineBitmapTime;
      v9 = KiTimelineBitmapTime <= (unsigned int)*v6;
      if ( KiTimelineBitmapTime != (unsigned int)*v6 )
        goto LABEL_19;
      if ( (v7 & 0x100000000LL) == 0 )
      {
        do
        {
          v9 = v8 <= (unsigned int)v7;
LABEL_19:
          if ( v9 )
          {
            if ( (unsigned int)v7 - v8 >= 0x20 )
              return;
            HIDWORD(v11) = HIDWORD(v7) | (1 << (v7 - v8));
            if ( HIDWORD(v11) == HIDWORD(v7) )
              return;
            LODWORD(v11) = v7;
          }
          else
          {
            if ( v8 - (unsigned int)v7 >= 0x20 )
              HIDWORD(v11) = 1;
            else
              HIDWORD(v11) = (HIDWORD(v7) << (v8 - v7)) | 1;
            LODWORD(v11) = v8;
          }
          v10 = v7;
          v7 = _InterlockedCompareExchange64(v6, v11, v7);
        }
        while ( v10 != v7 );
      }
    }
  }
}
