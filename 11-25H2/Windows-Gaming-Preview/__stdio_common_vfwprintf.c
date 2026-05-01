/*
 * XREFs of __stdio_common_vfwprintf @ 0x180002D06
 * Callers:
 *     wprintf @ 0x180002E2C (wprintf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _stdio_common_vfwprintf(
        unsigned __int64 Options,
        FILE *Stream,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vfwprintf(Options, Stream, Format, Locale, ArgList);
}
