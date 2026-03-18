/*
 * XREFs of DxgkSetHwProtectionTeardownRecovery @ 0x1400708D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetHwProtectionTeardownRecovery(ULONG64 a1)
{
  const void *v1; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 CurrentProcess; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v1 = (const void *)a1;
  v6 = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v6, v1, 8uLL);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64 *))(*((_QWORD *)Current + 11) + 448LL))(&v6);
  CurrentProcess = PsGetCurrentProcess();
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  WdLogGlobalForLineNumber = 1727;
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
