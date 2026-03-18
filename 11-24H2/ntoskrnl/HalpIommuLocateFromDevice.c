/*
 * XREFs of HalpIommuLocateFromDevice @ 0x1406FF0B0
 * Callers:
 *     IommuCreateAtsDevice @ 0x140563580 (IommuCreateAtsDevice.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1406FF184 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuLocateFromDevice(__int64 a1, ULONG_PTR **a2, __int64 a3)
{
  ULONG_PTR *v3; // rdi
  unsigned int v4; // ebx
  char v6; // al
  ULONG_PTR *v7; // rsi
  ULONG_PTR *i; // rdi

  v3 = (ULONG_PTR *)HalpIommuList;
  v4 = 0;
  v6 = 0;
  v7 = 0LL;
  while ( v3 != &HalpIommuList )
  {
    v7 = v3;
    if ( v3[26] )
    {
      v6 = guard_dispatch_icall_no_overrides(v3[2], a1, 0LL, 0LL);
      if ( v6 )
        break;
    }
    v3 = (ULONG_PTR *)*v3;
  }
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    if ( v6 )
      goto LABEL_13;
    v7 = i;
    if ( i[26] )
    {
      LOBYTE(a3) = 1;
      v6 = guard_dispatch_icall_no_overrides(i[2], a1, a3, 0LL);
      if ( v6 )
        goto LABEL_13;
    }
  }
  if ( v6 )
  {
LABEL_13:
    *a2 = v7;
    return v4;
  }
  return (unsigned int)-1073741275;
}
