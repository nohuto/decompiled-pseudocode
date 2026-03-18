/*
 * XREFs of AcpiSearchSdevTable @ 0x1400A73E0
 * Callers:
 *     PnpBiosGetDeviceResourceList @ 0x1400AD6F8 (PnpBiosGetDeviceResourceList.c)
 *     AcpiIsDeviceSecure @ 0x1400AECFC (AcpiIsDeviceSecure.c)
 * Callees:
 *     AcpiSdevEntryCompare @ 0x1400A7294 (AcpiSdevEntryCompare.c)
 */

char __fastcall AcpiSearchSdevTable(__int64 a1, const UNICODE_STRING *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  char v4; // di
  unsigned __int64 v5; // rbp
  int i; // esi
  __int64 v9; // rax

  *a3 = -1;
  v3 = a1 + 36;
  v4 = 0;
  v5 = a1 + *(unsigned int *)(a1 + 4);
  for ( i = 0; v3 + 4 <= v5; ++i )
  {
    v9 = *(unsigned __int16 *)(v3 + 2);
    if ( (unsigned int)v9 < 4 || v3 + v9 > v5 )
      break;
    if ( AcpiSdevEntryCompare(a2, v3) )
    {
      v4 = 1;
      *a3 = i;
      return v4;
    }
    v3 += *(unsigned __int16 *)(v3 + 2);
  }
  return v4;
}
