/*
 * XREFs of HalpIommuFreeRemappingTableEntry @ 0x14054DF38
 * Callers:
 *     HalpIrtFreeIndex @ 0x1407016B0 (HalpIrtFreeIndex.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFreeRemappingTableEntry(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *v4; // rbx
  unsigned int v7; // r8d
  ULONG_PTR *v8; // rcx

  v4 = (ULONG_PTR *)HalpIommuList;
  v7 = 0;
  while ( v4 != &HalpIommuList )
  {
    v8 = v4;
    v4 = (ULONG_PTR *)*v4;
    if ( (v8[59] & 0x40) != 0 )
    {
      if ( v8[21] )
      {
        v7 = guard_dispatch_icall_no_overrides(v8[2], a1, a2, a4);
        if ( v7 != -1073741594 )
          break;
      }
    }
  }
  return v7;
}
