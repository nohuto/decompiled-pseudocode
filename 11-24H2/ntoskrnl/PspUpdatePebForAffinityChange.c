/*
 * XREFs of PspUpdatePebForAffinityChange @ 0x14090815C
 * Callers:
 *     PspUpdateSingleProcessAffinity @ 0x1407754B0 (PspUpdateSingleProcessAffinity.c)
 *     PspApplyJobLimitsToProcess @ 0x1408E7EF8 (PspApplyJobLimitsToProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x140907EE0 (PspSetupUserProcessAddressSpace.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspWritePebAffinityInfoAttached @ 0x140A429F0 (PspWritePebAffinityInfoAttached.c)
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
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 488)) )
        return;
      v2 = 1;
    }
    KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v4);
    PspWritePebAffinityInfoAttached(a2);
    KiUnstackDetachProcess((__int64)v4, 0);
    if ( v2 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
  }
}
