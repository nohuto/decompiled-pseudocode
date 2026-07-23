/*
 * XREFs of _ui64toa_s @ 0x18012A860
 * Callers:
 *     <none>
 * Callees:
 *     x64toa_s @ 0x18012A89C (x64toa_s.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  return x64toa_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
