/*
 * XREFs of HalpDmaInitEarly @ 0x140C1285C
 * Callers:
 *     HalpDmaInitSystem @ 0x140B4F910 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14054E410 (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     HalpDmaInitializeObjectType @ 0x14054E97C (HalpDmaInitializeObjectType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpDmaInitEarly()
{
  __int64 result; // rax

  result = HalpDmaInitializeObjectType();
  if ( (int)result >= 0 )
  {
    HalpDmaHybridPassthroughSupport |= 0x80000000;
    result = HalpDmaAlwaysReserveLogicalAddressRangeInternal(0LL, 0x200000uLL);
    if ( (int)result >= 0 )
    {
      result = HalpDmaAlwaysReserveLogicalAddressRangeInternal(0xFEE00000uLL, 0x100000uLL);
      if ( (int)result >= 0 )
      {
        HalpDmaDomainListLock = 0LL;
        qword_140FC0D18 = (__int64)&HalpDmaDomainList;
        HalpDmaDomainList = (__int64)&HalpDmaDomainList;
        result = guard_dispatch_icall_no_overrides(3LL, 0LL);
        if ( (int)result >= 0 )
          HalpDmaIommuInterfaceFcnTable = (__int64)&unk_140FC0C30;
      }
    }
  }
  return result;
}
