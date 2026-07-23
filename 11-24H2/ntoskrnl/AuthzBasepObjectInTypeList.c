/*
 * XREFs of AuthzBasepObjectInTypeList @ 0x1404A9698
 * Callers:
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 * Callees:
 *     <none>
 */

char __fastcall AuthzBasepObjectInTypeList(_DWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 i; // r10

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( *a1 == *(_DWORD *)(a2 + 48 * i + 4)
      && a1[1] == *(_DWORD *)(a2 + 48 * i + 8)
      && a1[2] == *(_DWORD *)(a2 + 48 * i + 12)
      && a1[3] == *(_DWORD *)(a2 + 48 * i + 16) )
    {
      *a4 = i;
      return 1;
    }
  }
  return 0;
}
