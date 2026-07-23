/*
 * XREFs of I_MinAsn1ScanFrac @ 0x1408282D8
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140828358 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082882C (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     isdigit @ 0x1404FC270 (isdigit.c)
 */

__int64 __fastcall I_MinAsn1ScanFrac(unsigned __int8 *a1, unsigned int a2, int *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx

  *a3 = 0;
  v4 = 0;
  for ( *a4 = 0; v4 < a2; *a3 = v11 + 2 * (v10 - 24) )
  {
    if ( !isdigit(*a1) )
      break;
    v9 = *a3;
    ++v4;
    ++*a4;
    v10 = 5 * v9;
    v11 = *a1++;
  }
  return v4;
}
