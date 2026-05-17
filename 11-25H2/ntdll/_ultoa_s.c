/*
 * XREFs of _ultoa_s @ 0x18012E130
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x18012E280 (xtoa_s.c)
 */

errno_t __cdecl ultoa_s(unsigned int Value, char *Buffer, size_t BufferCount, int Radix)
{
  return xtoa_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
