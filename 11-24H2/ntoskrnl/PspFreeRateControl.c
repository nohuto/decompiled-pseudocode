/*
 * XREFs of PspFreeRateControl @ 0x14098CF0C
 * Callers:
 *     PspRemoveRateControl @ 0x140777BF8 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x14077800C (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14098CBAC (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x14098CE84 (PspRemoveCpuRateControl.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14098CFE0 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
