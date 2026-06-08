/*
 * XREFs of ReadGenAddr @ 0x140002350
 * Callers:
 *     SetPerfStateIO @ 0x1400014D0 (SetPerfStateIO.c)
 *     PctSnapPlatformCtrsEx @ 0x140002164 (PctSnapPlatformCtrsEx.c)
 *     ReadGenAddrHidden @ 0x140006708 (ReadGenAddrHidden.c)
 *     MWaitIdleCheck @ 0x140008200 (MWaitIdleCheck.c)
 *     C2Idle @ 0x140009AD0 (C2Idle.c)
 *     C3Idle @ 0x140009BA0 (C3Idle.c)
 *     C3IdleCheck @ 0x140009CA0 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x140009DD0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadGenAddr(unsigned __int8 *a1)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned __int8 v4; // dl
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl
  unsigned __int8 v9; // al
  unsigned __int32 v10; // eax
  unsigned __int16 v11; // ax

  if ( a1 )
  {
    v2 = *a1;
    if ( (_BYTE)v2 == 126 )
      return *((unsigned int *)a1 + 1);
    v3 = *(_QWORD *)(a1 + 4);
    v4 = a1[3];
    if ( v2 != 1 )
    {
      if ( v2 == 127 && v4 == 64 )
      {
        v5 = __readmsr(v3);
        goto LABEL_7;
      }
      return 0LL;
    }
    switch ( v4 )
    {
      case 8u:
        v9 = __inbyte(v3);
        v5 = v9;
        break;
      case 0x10u:
        v11 = __inword(v3);
        v5 = v11;
        break;
      case 0x20u:
        v10 = __indword(v3);
        v5 = v10;
        break;
      default:
        return 0LL;
    }
LABEL_7:
    if ( v5 )
    {
      v6 = a1[2];
      if ( v6 )
        v5 >>= v6;
      v7 = a1[1];
      if ( v7 < 0x40u )
        v5 &= (1LL << v7) - 1;
    }
    return v5;
  }
  return 0LL;
}
