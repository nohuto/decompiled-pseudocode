/*
 * XREFs of ?IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800EDA90
 * Callers:
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800EAE84 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall EndpointInfo::IdInVariant(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned int v5; // ebx

  if ( *(_WORD *)a3 != 4127 )
    return 0;
  if ( !*a2 )
    return 0;
  v5 = 0;
  if ( !*(_DWORD *)(a3 + 8) )
    return 0;
  while ( (unsigned int)_o__wcsicmp(a2, *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * v5)) )
  {
    if ( ++v5 >= *(_DWORD *)(a3 + 8) )
      return 0;
  }
  return 1;
}
