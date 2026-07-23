/*
 * XREFs of HalpIommuDomainGetLogicalAddressRange @ 0x14039B718
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x14039B4E0 (IommuMapIdentityRangeEx.c)
 *     IommuReserveLogicalAddressRange @ 0x140564B30 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14039B7B0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDomainGetLogicalAddressRange(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v6)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // r10

  v6 = *(__int64 (__fastcall ****)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))(a1 + 64);
  if ( v6 )
  {
    if ( **v6 == HalpBuddyAllocatorAllocateLogicalAddress )
      return HalpBuddyAllocatorAllocateLogicalAddress((_DWORD)v6, (_DWORD)a2, a3, a4, a5, (__int64)a6);
    else
      return guard_dispatch_icall_no_overrides(v6, a2);
  }
  else if ( a2 )
  {
    if ( (*a2 & 0xFFFLL) != 0 )
    {
      return 3221225712LL;
    }
    else
    {
      *a6 = *a2;
      return 0LL;
    }
  }
  else
  {
    return 3221225659LL;
  }
}
