/*
 * XREFs of HsaSlConfigureIntermediatePhysicalPte @ 0x140571AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HsaSlConfigureIntermediatePhysicalPte(unsigned __int64 *a1, unsigned int a2, __int64 a3)
{
  char result; // al

  if ( *a1 || !a2 )
    return 0;
  result = 1;
  *a1 = ((unsigned __int64)a2 << 9) ^ (a3 ^ *a1) & 0xFFF00000000001FFuLL ^ (a3 ^ ((unsigned __int64)a2 << 9)) & 0xFFFFFFFFFFFFF1FFuLL | 0x6000000000000001LL;
  return result;
}
