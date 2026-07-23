/*
 * XREFs of HalpIommuAllocateRemappingTableEntry @ 0x14054AD28
 * Callers:
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 * Callees:
 *     HalpIommuConvertPciBusMasterDescriptorToDeviceId @ 0x14054AE48 (HalpIommuConvertPciBusMasterDescriptorToDeviceId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuAllocateRemappingTableEntry(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7)
{
  ULONG_PTR *v8; // rbx
  unsigned int v9; // edx
  ULONG_PTR *v10; // rcx
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  if ( a6 )
  {
    LOBYTE(a2) = a7;
    HalpIommuConvertPciBusMasterDescriptorToDeviceId(a6, a2, &v12);
  }
  v8 = (ULONG_PTR *)HalpIommuList;
  v9 = 0;
  while ( v8 != &HalpIommuList )
  {
    v10 = v8;
    v8 = (ULONG_PTR *)*v8;
    if ( (v10[59] & 0x40) != 0 )
    {
      if ( v10[20] )
      {
        v9 = guard_dispatch_icall_no_overrides(v10[2], a1);
        if ( v9 != -1073741594 )
          break;
      }
    }
  }
  return v9;
}
