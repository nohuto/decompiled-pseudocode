/*
 * XREFs of PspFreeRateControl @ 0x14091C530
 * Callers:
 *     PspRemoveRateControl @ 0x140768118 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x14076852C (PspSetJobRateControl.c)
 *     PspRemoveCpuRateControl @ 0x14091C4A8 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140A57628 (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14091C604 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeRateControl(char **P, unsigned int a2)
{
  ULONG_PTR RateControlSize; // rax
  __int64 v4; // r9
  char *v5; // rcx

  RateControlSize = PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P, RateControlSize, 0LL, v4);
  v5 = P[3];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
