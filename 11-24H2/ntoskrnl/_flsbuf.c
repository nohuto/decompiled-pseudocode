/*
 * XREFs of _flsbuf @ 0x1404FE51C
 * Callers:
 *     _vsnwprintf_l @ 0x1404FAB40 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1404FAC60 (_vsnprintf_l.c)
 *     _snprintf @ 0x1404FB770 (_snprintf.c)
 *     _snwprintf @ 0x1404FB830 (_snwprintf.c)
 *     swprintf @ 0x1404FBAC0 (swprintf.c)
 *     _vswprintf_l @ 0x1404FBBAC (_vswprintf_l.c)
 *     sprintf @ 0x1404FCE20 (sprintf.c)
 *     _vsprintf_l @ 0x1404FD518 (_vsprintf_l.c)
 *     write_char_0 @ 0x1404FF7D0 (write_char_0.c)
 *     _soutput_s @ 0x140502D74 (_soutput_s.c)
 *     _swoutput_s @ 0x140502E68 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
