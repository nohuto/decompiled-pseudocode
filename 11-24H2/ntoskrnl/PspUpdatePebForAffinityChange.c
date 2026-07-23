/*
 * XREFs of PspUpdatePebForAffinityChange @ 0x1408DF878
 * Callers:
 *     PspUpdateSingleProcessAffinity @ 0x1407756D0 (PspUpdateSingleProcessAffinity.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D873C (PspApplyJobLimitsToProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspWritePebAffinityInfoAttached @ 0x140A38230 (PspWritePebAffinityInfoAttached.c)
 */

void __fastcall PspUpdatePebForAffinityChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  memset(v6, 0, sizeof(v6));
  if ( *(_QWORD *)(a2 + 736) )
  {
    if ( *(_QWORD *)(a2 + 464) && a2 != *(_QWORD *)(a1 + 544) )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488)) )
        return;
      v2 = 1;
    }
    KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v6);
    PspWritePebAffinityInfoAttached(a2);
    KiUnstackDetachProcess((__int64)v6, 0, v4, v5);
    if ( v2 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
  }
}
