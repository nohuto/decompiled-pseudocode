/*
 * XREFs of PspAllocateRateControl @ 0x140977878
 * Callers:
 *     PspSetJobRateControl @ 0x1407781CC (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409774CC (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     PspGetRateControlSize @ 0x140977900 (PspGetRateControlSize.c)
 *     PsChargeSharedPoolQuota @ 0x1409779B0 (PsChargeSharedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall PspAllocateRateControl(__int64 a1)
{
  ULONG_PTR RateControlSize; // rdi
  unsigned int v2; // r9d
  int v3; // ecx
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  RateControlSize = PspGetRateControlSize(a1);
  v2 = 64;
  if ( v3 != 2 )
    v2 = 256;
  Pool2 = (__int64 *)ExAllocatePool2(v2, RateControlSize, 0x624A7350u);
  if ( Pool2 )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize, 0LL);
    if ( v5 )
    {
      *Pool2 = v5;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0x624A7350u);
      return 0LL;
    }
  }
  return Pool2;
}
