/*
 * XREFs of PspAllocateRateControl @ 0x14098CF58
 * Callers:
 *     PspSetJobRateControl @ 0x14077800C (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14098CBAC (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     PspGetRateControlSize @ 0x14098CFE0 (PspGetRateControlSize.c)
 *     PsChargeSharedPoolQuota @ 0x14098D090 (PsChargeSharedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
