/*
 * XREFs of HalpPciReadIoConfigUlong @ 0x14054FF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciReadIoConfigUlong(unsigned int *a1, _DWORD *a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  unsigned __int32 v4; // eax

  v3 = *a1 ^ (a3 ^ (unsigned __int8)*a1) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  v4 = __indword(0xCFCu);
  *a2 = v4;
  return 4LL;
}
