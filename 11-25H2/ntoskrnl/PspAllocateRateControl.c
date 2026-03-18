/*
 * XREFs of PspAllocateRateControl @ 0x14091C57C
 * Callers:
 *     PspSetJobRateControl @ 0x14076852C (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140A57628 (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     PspGetRateControlSize @ 0x14091C604 (PspGetRateControlSize.c)
 *     PsChargeSharedPoolQuota @ 0x14091C6C0 (PsChargeSharedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall PspAllocateRateControl(__int64 a1)
{
  __int64 RateControlSize; // rdi
  unsigned int v2; // r9d
  int v3; // ecx
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  RateControlSize = PspGetRateControlSize(a1);
  v2 = 64;
  if ( v3 != 2 )
    v2 = 256;
  Pool2 = (__int64 *)ExAllocatePool2(v2);
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
