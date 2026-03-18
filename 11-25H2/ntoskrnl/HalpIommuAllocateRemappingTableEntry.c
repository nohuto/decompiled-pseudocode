/*
 * XREFs of HalpIommuAllocateRemappingTableEntry @ 0x14054AB24
 * Callers:
 *     HalpIrtAllocateIndex @ 0x1406F5464 (HalpIrtAllocateIndex.c)
 * Callees:
 *     HalpIommuConvertPciBusMasterDescriptorToDeviceId @ 0x14054AC44 (HalpIommuConvertPciBusMasterDescriptorToDeviceId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuAllocateRemappingTableEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7)
{
  ULONG_PTR *v7; // rbx
  unsigned int v8; // edx
  ULONG_PTR *v9; // rcx
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]

  v11 = 0LL;
  v12 = 0LL;
  if ( a6 )
  {
    LOBYTE(a2) = a7;
    HalpIommuConvertPciBusMasterDescriptorToDeviceId(a6, a2, &v11);
  }
  v7 = (ULONG_PTR *)HalpIommuList;
  v8 = 0;
  while ( v7 != &HalpIommuList )
  {
    v9 = v7;
    v7 = (ULONG_PTR *)*v7;
    if ( (v9[59] & 0x40) != 0 )
    {
      if ( v9[20] )
      {
        v8 = guard_dispatch_icall_no_overrides(v9[2]);
        if ( v8 != -1073741594 )
          break;
      }
    }
  }
  return v8;
}
