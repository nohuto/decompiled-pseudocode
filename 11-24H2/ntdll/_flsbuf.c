/*
 * XREFs of _flsbuf @ 0x1801268F0
 * Callers:
 *     _snprintf @ 0x1801202D0 (_snprintf.c)
 *     _snwprintf @ 0x180120390 (_snwprintf.c)
 *     swprintf @ 0x1801209C0 (swprintf.c)
 *     _vsprintf_l @ 0x180120B10 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180120BF4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180120CCC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180120DAC (_vsnwprintf_l.c)
 *     sprintf @ 0x1801245C0 (sprintf.c)
 *     write_char @ 0x180127178 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
