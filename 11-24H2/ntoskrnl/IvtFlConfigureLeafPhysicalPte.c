/*
 * XREFs of IvtFlConfigureLeafPhysicalPte @ 0x140571890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtFlConfigureLeafPhysicalPte(__int64 *a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  int v5; // r11d
  unsigned __int64 v8; // rdx
  unsigned int i; // r10d
  __int64 v10; // r9
  unsigned __int64 v11; // r8

  v5 = a3 & 2;
  if ( (a3 & 1) == 0 )
    return 0LL;
  v8 = a2 >> 12;
  for ( i = 0; i < a4; ++a1 )
  {
    v10 = *a1;
    if ( *a1 )
      break;
    v11 = v8;
    if ( !HalpIommuPageTableCacheCoherent )
      v10 = 96LL;
    ++i;
    ++v8;
    *a1 = (v11 << 12) & 0xFFFFFFFFFF000LL ^ (v10 & 0xFFF0000000000FFDuLL | (v5 != 0 ? 6LL : 4LL) & 0xFFF0000000000FFFuLL | 0x8000000000000001uLL) | 1;
  }
  return i;
}
