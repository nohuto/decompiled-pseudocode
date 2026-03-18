/*
 * XREFs of HalpMapEarlyPages @ 0x140540370
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x140412738 (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapEarlyPages(__int64 a1, unsigned int a2, unsigned int a3)
{
  return HalpMap(a1, a2, 1u, 0, a3, 0LL);
}
