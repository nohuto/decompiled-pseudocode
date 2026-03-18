/*
 * XREFs of KiTrackSystemCallExit @ 0x14073D580
 * Callers:
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 * Callees:
 *     PerfInfoLogSysCallExit @ 0x1403497B0 (PerfInfoLogSysCallExit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiTrackSystemCallExit(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  if ( a1 && *(_BYTE *)(a1 + 41) )
  {
    _InterlockedAdd(&KiSystemServiceTraceCallbacksActive, 1u);
    if ( *(_BYTE *)(a1 + 41) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 56), 1LL, &v3);
    _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x40) != 0 )
    PerfInfoLogSysCallExit(v3);
  return v3;
}
