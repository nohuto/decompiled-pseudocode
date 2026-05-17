/*
 * XREFs of _snwprintf_s @ 0x18012E940
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180067B90 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     _vsnwprintf_s @ 0x18012E970 (_vsnwprintf_s.c)
 */

int snwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnwprintf_s(Buffer, BufferCount, MaxCount, Format, va);
}
