/*
 * XREFs of HUBHSM_LoggingLastOpcode @ 0x140009810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ll @ 0x140041D44 (WPP_RECORDER_SF_ll.c)
 */

__int64 __fastcall HUBHSM_LoggingLastOpcode(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*(_QWORD *)(v4 + 2528), HIBYTE(*(_DWORD *)(v4 + 2712)) & 0x3F, a3, a4);
  return 2053LL;
}
