/*
 * XREFs of PspFreeRateControl @ 0x14097782C
 * Callers:
 *     PspRemoveRateControl @ 0x140777DB8 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1407781CC (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409774CC (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x1409777A4 (PspRemoveCpuRateControl.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140977900 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
