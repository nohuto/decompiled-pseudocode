/*
 * XREFs of IommuMapIdentityRangeEx @ 0x14039B4E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainMapIdentityRange @ 0x14039AB14 (HalpIommuDomainMapIdentityRange.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x14039B718 (HalpIommuDomainGetLogicalAddressRange.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14039B7B0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x14039BEFC (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140551564 (HalpIommuDomainMapLogicalRange.c)
 *     IommupValidateMdl @ 0x140565100 (IommupValidateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuMapIdentityRangeEx(ULONG_PTR a1, int a2, __int64 a3)
{
  signed __int64 v3; // rbx
  __int64 v4; // r12
  int v5; // r9d
  int v6; // r15d
  int v8; // r9d
  int v9; // r10d
  char v10; // r9
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rbx
  __int64 (__fastcall ***v13)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rcx
  ULONG_PTR v14; // rax
  int LogicalAddress; // eax
  int LogicalAddressRange; // edi
  int v17; // eax
  __int64 v19; // rcx
  __int64 i; // rbx
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+90h] [rbp+40h]
  ULONG_PTR v24; // [rsp+A8h] [rbp+58h] BYREF

  v21[0] = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = 0;
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( !v8 )
      return 0;
    if ( v8 != 2 )
      return (unsigned int)-1073741585;
  }
  v9 = 4096;
  if ( !*(_DWORD *)a3 )
  {
    if ( !(unsigned __int8)IommupValidateMdl(*(_QWORD *)(a3 + 8)) )
      return (unsigned int)-1073741583;
    v10 = 0;
    v11 = *(unsigned int *)(v19 + 40);
    v4 = v19 + 8 * (((unsigned __int64)*(unsigned int *)(v19 + 44) >> 12) + 6);
LABEL_8:
    v22 = 0;
    goto LABEL_9;
  }
  if ( *(_DWORD *)a3 != 1 )
  {
    if ( *(_DWORD *)a3 != 2 )
      return (unsigned int)-1073741583;
    v10 = 0;
    v4 = *(_QWORD *)(a3 + 8);
    v11 = *(_QWORD *)(a3 + 16) << 12;
    goto LABEL_8;
  }
  v3 = *(_QWORD *)(a3 + 8);
  v10 = 1;
  v11 = *(_QWORD *)(a3 + 16);
  v22 = 1;
  if ( v3 % 4096 )
    return (unsigned int)-1073741583;
LABEL_9:
  if ( !v11 )
    return (unsigned int)-1073741583;
  v24 = v3;
  if ( v10 )
  {
    LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, (unsigned int)&v24, v11, 0, 0LL, (__int64)v21);
    if ( LogicalAddressRange < 0 )
      return (unsigned int)LogicalAddressRange;
    v6 = 1;
    v17 = HalpIommuDomainMapLogicalRange(a1, a2, v3, v11, v24);
  }
  else
  {
    v12 = (_QWORD *)v4;
    while ( v6 < (int)(v11 >> 12) )
    {
      v13 = *(__int64 (__fastcall ****)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))(a1 + 64);
      v14 = *v12 << 12;
      v24 = v14;
      if ( v13 )
      {
        if ( **v13 == HalpBuddyAllocatorAllocateLogicalAddress )
          LogicalAddress = HalpBuddyAllocatorAllocateLogicalAddress(
                             (_DWORD)v13,
                             (unsigned int)&v24,
                             v9,
                             0,
                             0LL,
                             (__int64)v21);
        else
          LogicalAddress = guard_dispatch_icall_no_overrides(v13, &v24);
        LogicalAddressRange = LogicalAddress;
        if ( LogicalAddress < 0 )
          goto LABEL_33;
        v9 = 4096;
      }
      else
      {
        v21[0] = v14;
      }
      ++v6;
      ++v12;
    }
    v17 = HalpIommuDomainMapIdentityRange(a1, a2, v4, v11 >> 12);
  }
  LogicalAddressRange = v17;
  if ( v17 < 0 )
  {
LABEL_33:
    if ( v6 > 0 )
    {
      if ( v22 )
      {
        HalpIommuDomainFreeLogicalAddressRange(a1, v24);
      }
      else
      {
        for ( i = v6; i >= 0; --i )
        {
          v24 = *(_QWORD *)(v4 + 8 * i) << 12;
          HalpIommuDomainFreeLogicalAddressRange(a1, v24);
        }
      }
    }
  }
  return (unsigned int)LogicalAddressRange;
}
