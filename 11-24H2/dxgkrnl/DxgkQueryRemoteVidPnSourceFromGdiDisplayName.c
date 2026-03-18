/*
 * XREFs of DxgkQueryRemoteVidPnSourceFromGdiDisplayName @ 0x140070820
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryRemoteVidPnSourceFromGdiDisplayName(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 CurrentProcess; // rax
  __int64 v4; // rax

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 456LL))(a1);
  CurrentProcess = PsGetCurrentProcess();
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  WdLogGlobalForLineNumber = 1743;
  v4 = PsGetCurrentProcess();
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x 0x%I64x encountered exception",
    -1073741811LL,
    v4,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
