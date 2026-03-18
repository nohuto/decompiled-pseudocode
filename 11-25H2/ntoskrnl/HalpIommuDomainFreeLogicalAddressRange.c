/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x14026D92C
 * Callers:
 *     IommuUnmapLogicalRange @ 0x14026D700 (IommuUnmapLogicalRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x14026D7C0 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x14026DCF0 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x14026E450 (IommuMapIdentityRangeEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x140564140 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140564530 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14026D980 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDomainFreeLogicalAddressRange(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    return (a2 & 0xFFF) != 0 ? 0xC000000D : 0;
  if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 8LL) == HalpBuddyAllocatorFreeLogicalAddress )
    return HalpBuddyAllocatorFreeLogicalAddress(v2, a2);
  return guard_dispatch_icall_no_overrides(v2, a2);
}
