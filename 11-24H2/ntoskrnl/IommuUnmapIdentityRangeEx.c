/*
 * XREFs of IommuUnmapIdentityRangeEx @ 0x1403AD580
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainUnmapIdentityRange @ 0x1403AC118 (HalpIommuDomainUnmapIdentityRange.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x1403AD6EC (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x1403AD740 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1403AD858 (HalpIommuDomainUnmapLogicalRange.c)
 *     IommupValidateMdl @ 0x140567674 (IommupValidateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuUnmapIdentityRangeEx(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r8d
  __int64 v5; // rbx
  __int64 v6; // r14
  int v8; // r8d
  char v9; // r8
  unsigned __int64 v10; // rdi
  __int64 i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(BugCheckParameter3 + 8);
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( !v8 )
      return 0LL;
    if ( v8 != 2 )
      return 3221225711LL;
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)(a2 + 16);
      v9 = 1;
      if ( v5 % 4096 )
        return 3221225712LL;
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
        return 3221225712LL;
      v9 = 0;
      v6 = *(_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)(a2 + 16) << 12;
    }
  }
  else
  {
    if ( !(unsigned __int8)IommupValidateMdl(*(_QWORD *)(a2 + 8)) )
      return 3221225712LL;
    v9 = 0;
    v10 = *(unsigned int *)(v15 + 40);
    v6 = v15 + 8 * (((unsigned __int64)*(unsigned int *)(v15 + 44) >> 12) + 6);
  }
  if ( !v10 )
    return 3221225712LL;
  if ( v9 )
  {
    result = HalpIommuDomainFreeLogicalAddressRange(BugCheckParameter3, v5);
    if ( (int)result >= 0 )
    {
      v16 = v10;
      return HalpIommuDomainUnmapLogicalRange(BugCheckParameter3, v5, &v16, 0LL);
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < v10 >> 12; i = (unsigned int)(i + 1) )
    {
      v12 = *(_QWORD *)(BugCheckParameter3 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v6 + 8 * i) << 12;
        result = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 8LL) == HalpBuddyAllocatorFreeLogicalAddress
               ? HalpBuddyAllocatorFreeLogicalAddress(v12, v13)
               : guard_dispatch_icall_no_overrides(v12, v13, HalpBuddyAllocatorFreeLogicalAddress, a4);
        if ( (int)result < 0 )
          return result;
      }
    }
    return HalpIommuDomainUnmapIdentityRange(BugCheckParameter3, v6, v10 >> 12, a4);
  }
  return result;
}
