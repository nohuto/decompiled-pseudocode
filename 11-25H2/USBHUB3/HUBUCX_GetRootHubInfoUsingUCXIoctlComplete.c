/*
 * XREFs of HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1400283E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_GetRootHubInfoUsingUCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a4 + 144) = *(_WORD *)(a4 + 112);
    *(_WORD *)(a4 + 150) = *(_WORD *)(a4 + 114);
    *(_QWORD *)(a4 + 1112) = *(_QWORD *)(a4 + 120);
    *(_WORD *)(a4 + 2482) = *(_WORD *)(a4 + 116);
    *(_WORD *)(a4 + 2484) = *(_WORD *)(a4 + 118);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a4 + 2528),
      2u,
      3u,
      0x29u,
      (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
      v8);
  }
  HUBSM_AddEvent(a4 + 1272, ((v4 >> 31) & 0xFFFFFFFC) + 2042);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
