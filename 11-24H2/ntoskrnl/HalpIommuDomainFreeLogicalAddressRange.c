/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x1403AD6EC
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x1403ACCD0 (IommuMapIdentityRangeEx.c)
 *     IommuUnmapLogicalRange @ 0x1403AD4C0 (IommuUnmapLogicalRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x1403AD580 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x1403ADCD0 (IommuMapLogicalRangeEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405669B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140566FA0 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x1403AD740 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDomainFreeLogicalAddressRange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    return (a2 & 0xFFF) != 0 ? 0xC000000D : 0;
  if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v4 + 8LL) == HalpBuddyAllocatorFreeLogicalAddress )
    return HalpBuddyAllocatorFreeLogicalAddress(v4, a2);
  return guard_dispatch_icall_no_overrides(v4, a2, HalpBuddyAllocatorFreeLogicalAddress, a4);
}
