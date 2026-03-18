/*
 * XREFs of IommuMapLogicalRangeEx @ 0x1403ADCD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403ACFA0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x1403AD6EC (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainMapLogical @ 0x1403ADEBC (HalpIommuDomainMapLogical.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140553C24 (HalpIommuDomainMapLogicalRange.c)
 *     IommupValidateMdl @ 0x140567674 (IommupValidateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuMapLogicalRangeEx(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        __int64 *a7)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r15
  unsigned __int64 *v10; // r11
  char v13; // r14
  unsigned __int64 v14; // rsi
  __int64 (__fastcall ***v15)(__int64, unsigned __int64 *, unsigned __int64, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *); // r10
  ULONG_PTR v16; // rax
  int LogicalAddress; // eax
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rcx
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v24 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD *)(a1 + 8);
  LODWORD(v9) = 0;
  v10 = a4;
  if ( v8 && v8 != 3 )
    return (unsigned int)-1073741585;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v7 = *(_QWORD *)(a3 + 8);
      v14 = *(_QWORD *)(a3 + 16);
      v13 = 1;
      if ( v7 % 4096 )
        return (unsigned int)-1073741583;
    }
    else
    {
      if ( *(_DWORD *)a3 != 2 )
        return (unsigned int)-1073741583;
      v13 = 0;
      v9 = *(_QWORD *)(a3 + 8);
      v14 = *(_QWORD *)(a3 + 16) << 12;
    }
  }
  else
  {
    if ( !(unsigned __int8)IommupValidateMdl(*(_QWORD *)(a3 + 8)) )
      return (unsigned int)-1073741583;
    v13 = 0;
    v14 = *(unsigned int *)(v23 + 40);
    LODWORD(v9) = v23 + 8 * ((*(_DWORD *)(v23 + 44) >> 12) + 6);
  }
  if ( !v14 )
    return (unsigned int)-1073741583;
  v15 = *(__int64 (__fastcall ****)(__int64, unsigned __int64 *, unsigned __int64, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(a1 + 64);
  if ( !v15 )
  {
    if ( !v10 )
      return (unsigned int)-1073741637;
    v16 = *a4;
    if ( (*a4 & 0xFFF) != 0 )
      return (unsigned int)-1073741584;
    v24 = *a4;
    goto LABEL_16;
  }
  if ( **v15 == HalpBuddyAllocatorAllocateLogicalAddress )
    LogicalAddress = HalpBuddyAllocatorAllocateLogicalAddress(
                       *(_QWORD *)(a1 + 64),
                       v10,
                       v14,
                       a5,
                       a6,
                       (unsigned __int64 *)&v24);
  else
    LogicalAddress = guard_dispatch_icall_no_overrides(v15, v10, v14, a5);
  v18 = LogicalAddress;
  if ( LogicalAddress >= 0 )
  {
    v16 = v24;
LABEL_16:
    if ( v13 )
      v19 = HalpIommuDomainMapLogicalRange(a1, a2, v7, v14, v16);
    else
      v19 = HalpIommuDomainMapLogical(a1, a2, v9, v14 >> 12, v16);
    v18 = v19;
    if ( v19 < 0 )
      HalpIommuDomainFreeLogicalAddressRange(a1, v24, v20, v21);
    else
      *a7 = v24;
  }
  return v18;
}
