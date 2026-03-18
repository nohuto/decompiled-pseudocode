/*
 * XREFs of DxgkSetHwProtectionTeardownRecovery @ 0x14006FF00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  WdLogGlobalForLineNumber = 1744;
  v4 = PsGetCurrentProcess();
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x 0x%I64x encountered exception",
    -1073741811LL,
    v4,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
