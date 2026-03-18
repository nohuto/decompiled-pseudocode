/*
 * XREFs of HUBHSM_InitializingUsb4Drom @ 0x140009540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBHSM_InitializingUsb4Drom(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // cx
  int v3; // ecx
  unsigned __int16 v4; // r9
  unsigned int v6; // edi
  int v7; // edx
  __int64 Pool2; // rsi
  unsigned int v9; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 2686);
  if ( (v2 & 0xFFFu) < 3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2045LL;
    v3 = v2 & 0xFFF;
    v4 = 54;
LABEL_4:
    WPP_RECORDER_SF_d(*(_QWORD *)(v1 + 2528), 2u, 3u, v4, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids, v3);
    return 2045LL;
  }
  v3 = v2 & 0xFFF;
  v6 = v3 + 13;
  if ( (unsigned int)(v3 + 13) < 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2045LL;
    v4 = 55;
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(64LL, v6, 1748191317LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2528), v7, 3, 56, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
    }
    return 2045LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2528),
      4u,
      3u,
      0x39u,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      *(_WORD *)(v1 + 2686) & 0xFFF);
  *(_DWORD *)(v1 + 2704) = 0;
  *(_DWORD *)(v1 + 2708) = 0;
  *(_DWORD *)(v1 + 2692) = v6;
  v9 = v6 >> 2;
  *(_QWORD *)(v1 + 2696) = Pool2;
  *(_DWORD *)(v1 + 2688) = v9;
  if ( (*(_BYTE *)(v1 + 2686) & 3) != 0 )
    *(_DWORD *)(v1 + 2688) = v9 + 1;
  return 2053LL;
}
