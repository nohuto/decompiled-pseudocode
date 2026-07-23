/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x14039BEFC
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x14039B4E0 (IommuMapIdentityRangeEx.c)
 *     IommuUnmapLogicalRange @ 0x14039BCD0 (IommuUnmapLogicalRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x14039BD90 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x14039C4E0 (IommuMapLogicalRangeEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405646B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140564B30 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14039BF50 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
