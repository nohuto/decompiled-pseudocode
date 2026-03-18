/*
 * XREFs of HalpDmaInitEarly @ 0x140BFF798
 * Callers:
 *     HalpDmaInitSystem @ 0x140B3D8C0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14054E170 (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     HalpDmaInitializeObjectType @ 0x14054E6DC (HalpDmaInitializeObjectType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
        qword_140FC0318 = (__int64)&HalpDmaDomainList;
        HalpDmaDomainList = (__int64)&HalpDmaDomainList;
        result = guard_dispatch_icall_no_overrides(3LL);
        if ( (int)result >= 0 )
          HalpDmaIommuInterfaceFcnTable = (__int64)&unk_140FC0230;
      }
    }
  }
  return result;
}
