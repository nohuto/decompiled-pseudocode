/*
 * XREFs of HalpBuddyAllocatorFreeLogicalAddress @ 0x14039BF50
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14039BD90 (IommuUnmapIdentityRangeEx.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x14039BEFC (HalpIommuDomainFreeLogicalAddressRange.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpBuddyAllocatorBltPopBuddy @ 0x14039AD1C (HalpBuddyAllocatorBltPopBuddy.c)
 *     HalpBuddyAllocatorBltAdd @ 0x14039ADBC (HalpBuddyAllocatorBltAdd.c)
 */

__int64 __fastcall HalpBuddyAllocatorFreeLogicalAddress(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 *v7; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  while ( 1 )
  {
    v4 = *(_QWORD *)(v2 + 48);
    if ( a2 >= v4 && a2 < v4 + *(_QWORD *)(v2 + 56) && !*(_QWORD *)(v2 + 24) && !*(_QWORD *)(v2 + 32) )
      break;
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 && a2 >= *(_QWORD *)(v5 + 48) )
    {
      v2 = *(_QWORD *)(v2 + 32);
    }
    else
    {
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v2 )
        return (unsigned int)-1073741811;
    }
  }
  if ( !*(_BYTE *)(v2 + 72) )
    return (unsigned int)-1073741811;
  if ( *(_QWORD *)(v2 + 40) == a1 + 80 )
  {
    return *(_BYTE *)(v2 + 73) == 0 ? 0xC000000D : 0;
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), -*(_QWORD *)(v2 + 64));
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 64), -*(_QWORD *)(v2 + 56));
    *(_QWORD *)(v2 + 64) = 0LL;
    v6 = 0;
    *(_BYTE *)(v2 + 72) = 0;
    while ( 1 )
    {
      v7 = (__int64 *)(v2 + 16);
      if ( !*(_QWORD *)(v2 + 16) || !HalpBuddyAllocatorBltPopBuddy(v2, a1) )
        break;
      v2 = *v7;
      HalpMmAllocCtxFree(v9, *(_QWORD *)(*v7 + 24));
      HalpMmAllocCtxFree(v10, *(_QWORD *)(v2 + 32));
      *(_QWORD *)(v2 + 24) = 0LL;
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_BYTE *)(v2 + 72) = 0;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFEuLL);
    }
    HalpBuddyAllocatorBltAdd((__int64 *)v2, a1);
  }
  return v6;
}
