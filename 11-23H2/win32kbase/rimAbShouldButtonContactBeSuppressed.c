/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C017C228
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C400 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C920 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetPointerInputType @ 0x1C00E0FE4 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01B086C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edx
  int v9; // r8d
  _QWORD **v10; // r14
  _QWORD *i; // rsi
  int v12; // ebx
  __int64 v13; // r9
  char v14; // dl

  v6 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    v7 = *(_DWORD *)(a2 + 1012);
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v7;
    if ( !v7 )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            4,
            1,
            14,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 360) & 8) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v10 = (_QWORD **)(a1 + 448);
        for ( i = *v10; i != v10; i = (_QWORD *)*i )
        {
          v12 = RIMGetPointerInputType(*(i - 1));
          if ( v12 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v13 = *(i - 1);
            if ( *(_DWORD *)(v13 + 1012) )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v14 = 0;
              }
              if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_dd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v14,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (__int64)gRimLog,
                  4u,
                  1u,
                  0xFu,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  *(_DWORD *)(v13 + 24),
                  *(_DWORD *)(v13 + 1012));
              return 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
