/*
 * XREFs of _vsprintf_l @ 0x180120B10
 * Callers:
 *     vsprintf @ 0x180120BA0 (vsprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _flsbuf @ 0x1801268F0 (_flsbuf.c)
 *     _output_l @ 0x180126900 (_output_l.c)
 */

int __cdecl vsprintf_l(char *const Buffer, const char *const Format, const _locale_t Locale, va_list ArgList)
{
  int v4; // eax
  bool v5; // sf
  int v6; // ebx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && Buffer )
  {
    File._base = Buffer;
    File._ptr = Buffer;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v4 = output_l(&File, Format, Locale, ArgList);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v6;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
