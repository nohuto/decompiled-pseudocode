/*
 * XREFs of _itoa_s @ 0x18012A830
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x18012A9D0 (xtoa_s.c)
 */

errno_t __cdecl itoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return xtoa_s(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
