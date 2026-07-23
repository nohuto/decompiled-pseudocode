/*
 * XREFs of _ui64tow_s @ 0x18012AB60
 * Callers:
 *     <none>
 * Callees:
 *     x64tow_s @ 0x18012AB9C (x64tow_s.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return x64tow_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
