/*
 * XREFs of HalpIommuLocateFromDevice @ 0x1406FCCF0
 * Callers:
 *     IommuCreateAtsDevice @ 0x1405611B0 (IommuCreateAtsDevice.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1406FCDC4 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuLocateFromDevice(__int64 a1, ULONG_PTR **a2)
{
  ULONG_PTR *v2; // rdi
  unsigned int v3; // ebx
  char v5; // al
  ULONG_PTR *v6; // rsi
  ULONG_PTR *i; // rdi

  v2 = (ULONG_PTR *)HalpIommuList;
  v3 = 0;
  v5 = 0;
  v6 = 0LL;
  while ( v2 != &HalpIommuList )
  {
    v6 = v2;
    if ( v2[26] )
    {
      v5 = guard_dispatch_icall_no_overrides(v2[2], a1);
      if ( v5 )
        break;
    }
    v2 = (ULONG_PTR *)*v2;
  }
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    if ( v5 )
      goto LABEL_13;
    v6 = i;
    if ( i[26] )
    {
      v5 = guard_dispatch_icall_no_overrides(i[2], a1);
      if ( v5 )
        goto LABEL_13;
    }
  }
  if ( v5 )
  {
LABEL_13:
    *a2 = v6;
    return v3;
  }
  return (unsigned int)-1073741275;
}
