/*
 * XREFs of AslpMemoryRangeCheckBounds @ 0x140697B54
 * Callers:
 *     AslpFileGetCrcChecksumBoot @ 0x14080DA84 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetImageCodeSectionHeader @ 0x14080E548 (AslpFileGetImageCodeSectionHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall AslpMemoryRangeCheckBounds(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  bool result; // al

  v2 = *a1;
  v3 = *a2;
  result = 0;
  if ( *a1 >= *a2 )
  {
    v4 = a1[1];
    if ( v2 <= v4 )
    {
      v5 = a2[1];
      if ( v2 <= v5 && v4 >= v3 && v4 <= v5 && v3 <= v5 )
        return 1;
    }
  }
  return result;
}
