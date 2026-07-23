/*
 * XREFs of _i64toa_s @ 0x18012A800
 * Callers:
 *     <none>
 * Callees:
 *     x64toa_s @ 0x18012A89C (x64toa_s.c)
 */

errno_t __cdecl i64toa_s(__int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return x64toa_s(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
