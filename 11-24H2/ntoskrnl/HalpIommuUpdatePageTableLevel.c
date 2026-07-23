/*
 * XREFs of HalpIommuUpdatePageTableLevel @ 0x14054AC00
 * Callers:
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

void HalpIommuUpdatePageTableLevel()
{
  ULONG_PTR i; // rcx
  int v1; // eax
  unsigned int v2; // eax

  HalpIommuMaxPageTableDepth = 0;
  HalpIommuMinPageTableDepth = -1;
  for ( i = HalpIommuList; (ULONG_PTR *)i != &HalpIommuList; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 472);
    if ( (v1 & 0x100) != 0 )
    {
      v2 = ((unsigned __int16)v1 >> 13) + 1;
      if ( v2 > HalpIommuMaxPageTableDepth )
        HalpIommuMaxPageTableDepth = v2;
      if ( v2 < HalpIommuMinPageTableDepth )
        HalpIommuMinPageTableDepth = v2;
    }
  }
}
