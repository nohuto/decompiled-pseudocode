/*
 * XREFs of _flsbuf @ 0x18012A1A0
 * Callers:
 *     _snprintf @ 0x180123B80 (_snprintf.c)
 *     _snwprintf @ 0x180123C40 (_snwprintf.c)
 *     swprintf @ 0x180124270 (swprintf.c)
 *     _vsprintf_l @ 0x1801243C0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x1801244A4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18012457C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18012465C (_vsnwprintf_l.c)
 *     sprintf @ 0x180127E70 (sprintf.c)
 *     write_char @ 0x18012AA28 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
