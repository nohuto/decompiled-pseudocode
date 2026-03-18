/*
 * XREFs of PspUpdatePebForAffinityChange @ 0x14083C4B8
 * Callers:
 *     PspUpdateSingleProcessAffinity @ 0x140765AE0 (PspUpdateSingleProcessAffinity.c)
 *     PspSetupUserProcessAddressSpace @ 0x14083C23C (PspSetupUserProcessAddressSpace.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D8CC0 (PspApplyJobLimitsToProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PspWritePebAffinityInfoAttached @ 0x140A3E4F4 (PspWritePebAffinityInfoAttached.c)
 */

void __fastcall PspUpdatePebForAffinityChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  memset(v4, 0, sizeof(v4));
  if ( *(_QWORD *)(a2 + 736) )
  {
    if ( *(_QWORD *)(a2 + 464) && a2 != *(_QWORD *)(a1 + 544) )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488)) )
        return;
      v2 = 1;
    }
    KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v4);
    PspWritePebAffinityInfoAttached(a2);
    KiUnstackDetachProcess((__int64)v4, 0LL);
    if ( v2 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
  }
}
