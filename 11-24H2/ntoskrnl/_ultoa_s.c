/*
 * XREFs of _ultoa_s @ 0x140502F60
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x1405030B0 (xtoa_s.c)
 */

errno_t __cdecl ultoa_s(unsigned int Val, char *DstBuf, size_t Size, int Radix)
{
  return xtoa_s(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
