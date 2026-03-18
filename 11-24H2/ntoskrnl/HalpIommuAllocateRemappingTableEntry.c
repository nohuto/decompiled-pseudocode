/*
 * XREFs of HalpIommuAllocateRemappingTableEntry @ 0x14054D468
 * Callers:
 *     HalpIrtAllocateIndex @ 0x140701254 (HalpIrtAllocateIndex.c)
 * Callees:
 *     HalpIommuConvertPciBusMasterDescriptorToDeviceId @ 0x14054D588 (HalpIommuConvertPciBusMasterDescriptorToDeviceId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuAllocateRemappingTableEntry(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r15d
  ULONG_PTR *v10; // rbx
  unsigned int v11; // edx
  ULONG_PTR *v12; // rcx
  __int128 v14; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h]

  v9 = a2;
  v14 = 0LL;
  v15 = 0LL;
  if ( a6 )
  {
    LOBYTE(a2) = a7;
    HalpIommuConvertPciBusMasterDescriptorToDeviceId(a6, a2, &v14);
  }
  v10 = (ULONG_PTR *)HalpIommuList;
  v11 = 0;
  while ( v10 != &HalpIommuList )
  {
    v12 = v10;
    v10 = (ULONG_PTR *)*v10;
    if ( (v12[59] & 0x40) != 0 )
    {
      if ( v12[20] )
      {
        v11 = guard_dispatch_icall_no_overrides(v12[2], a1, v9, a3 >> 8);
        if ( v11 != -1073741594 )
          break;
      }
    }
  }
  return v11;
}
