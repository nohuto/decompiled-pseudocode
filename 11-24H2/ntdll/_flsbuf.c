/*
 * XREFs of _flsbuf @ 0x1801286C0
 * Callers:
 *     _snprintf @ 0x1801220A0 (_snprintf.c)
 *     _snwprintf @ 0x180122160 (_snwprintf.c)
 *     swprintf @ 0x180122790 (swprintf.c)
 *     _vsprintf_l @ 0x1801228E0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x1801229C4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180122A9C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180122B7C (_vsnwprintf_l.c)
 *     sprintf @ 0x180126390 (sprintf.c)
 *     write_char @ 0x180128F48 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
