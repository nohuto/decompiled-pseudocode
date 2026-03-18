/*
 * XREFs of HalpIommuFreeRemappingTableEntry @ 0x14054B620
 * Callers:
 *     HalpIrtFreeIndex @ 0x1406F58C0 (HalpIrtFreeIndex.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIommuFreeRemappingTableEntry()
{
  ULONG_PTR *v0; // rbx
  unsigned int v1; // r8d
  ULONG_PTR *v2; // rcx

  v0 = (ULONG_PTR *)HalpIommuList;
  v1 = 0;
  while ( v0 != &HalpIommuList )
  {
    v2 = v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (v2[59] & 0x40) != 0 )
    {
      if ( v2[21] )
      {
        v1 = guard_dispatch_icall_no_overrides(v2[2]);
        if ( v1 != -1073741594 )
          break;
      }
    }
  }
  return v1;
}
