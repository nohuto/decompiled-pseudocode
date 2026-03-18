/*
 * XREFs of IommuMapIdentityRangeEx @ 0x14026E450
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x14026D92C (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x14026E688 (HalpIommuDomainGetLogicalAddressRange.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14026E720 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpIommuDomainMapIdentityRange @ 0x14048CEA8 (HalpIommuDomainMapIdentityRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140551324 (HalpIommuDomainMapLogicalRange.c)
 *     IommupValidateMdl @ 0x140564AA4 (IommupValidateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuMapIdentityRangeEx(__int64 a1, unsigned int a2, __int64 a3)
{
  signed __int64 v3; // rbx
  _QWORD *v4; // r12
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
  ULONG_PTR v21; // [rsp+20h] [rbp-30h]
  _QWORD *v22; // [rsp+28h] [rbp-28h]
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  char v24; // [rsp+90h] [rbp+40h]
  ULONG_PTR v26; // [rsp+A8h] [rbp+58h] BYREF

  v23[0] = 0LL;
  v3 = 0LL;
  v26 = 0LL;
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
    v4 = (_QWORD *)(v19 + 8 * (((unsigned __int64)*(unsigned int *)(v19 + 44) >> 12) + 6));
LABEL_8:
    v24 = 0;
    goto LABEL_9;
  }
  if ( *(_DWORD *)a3 != 1 )
  {
    if ( *(_DWORD *)a3 != 2 )
      return (unsigned int)-1073741583;
    v10 = 0;
    v4 = *(_QWORD **)(a3 + 8);
    v11 = *(_QWORD *)(a3 + 16) << 12;
    goto LABEL_8;
  }
  v3 = *(_QWORD *)(a3 + 8);
  v10 = 1;
  v11 = *(_QWORD *)(a3 + 16);
  v24 = 1;
  if ( v3 % 4096 )
    return (unsigned int)-1073741583;
LABEL_9:
  if ( !v11 )
    return (unsigned int)-1073741583;
  v26 = v3;
  if ( v10 )
  {
    LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, (unsigned int)&v26, v11, 0, 0LL, (__int64)v23);
    if ( LogicalAddressRange < 0 )
      return (unsigned int)LogicalAddressRange;
    v6 = 1;
    v17 = HalpIommuDomainMapLogicalRange(a1, a2, v3, v11, v26);
  }
  else
  {
    v12 = v4;
    while ( v6 < (int)(v11 >> 12) )
    {
      v13 = *(__int64 (__fastcall ****)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))(a1 + 64);
      v14 = *v12 << 12;
      v26 = v14;
      if ( v13 )
      {
        if ( **v13 == HalpBuddyAllocatorAllocateLogicalAddress )
        {
          LogicalAddress = HalpBuddyAllocatorAllocateLogicalAddress(
                             (_DWORD)v13,
                             (unsigned int)&v26,
                             v9,
                             0,
                             0LL,
                             (__int64)v23);
        }
        else
        {
          v22 = v23;
          v21 = 0LL;
          LogicalAddress = guard_dispatch_icall_no_overrides(v13, &v26);
        }
        LogicalAddressRange = LogicalAddress;
        if ( LogicalAddress < 0 )
          goto LABEL_33;
        v9 = 4096;
      }
      else
      {
        v23[0] = v14;
      }
      ++v6;
      ++v12;
    }
    v17 = HalpIommuDomainMapIdentityRange(a1, a2, v4, v11 >> 12, v21, v22);
  }
  LogicalAddressRange = v17;
  if ( v17 < 0 )
  {
LABEL_33:
    if ( v6 > 0 )
    {
      if ( v24 )
      {
        HalpIommuDomainFreeLogicalAddressRange(a1, v26);
      }
      else
      {
        for ( i = v6; i >= 0; --i )
        {
          v26 = v4[i] << 12;
          HalpIommuDomainFreeLogicalAddressRange(a1, v26);
        }
      }
    }
  }
  return (unsigned int)LogicalAddressRange;
}
