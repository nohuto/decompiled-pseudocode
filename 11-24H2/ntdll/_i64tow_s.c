/*
 * XREFs of _i64tow_s @ 0x18012AB00
 * Callers:
 *     <none>
 * Callees:
 *     x64tow_s @ 0x18012AB9C (x64tow_s.c)
 */

errno_t __cdecl i64tow_s(__int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return x64tow_s(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
