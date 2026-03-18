/*
 * XREFs of _flsbuf @ 0x140500C5C
 * Callers:
 *     _vsnwprintf_l @ 0x1404FD280 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1404FD3A0 (_vsnprintf_l.c)
 *     _snprintf @ 0x1404FDEB0 (_snprintf.c)
 *     _snwprintf @ 0x1404FDF70 (_snwprintf.c)
 *     swprintf @ 0x1404FE200 (swprintf.c)
 *     _vswprintf_l @ 0x1404FE2EC (_vswprintf_l.c)
 *     sprintf @ 0x1404FF560 (sprintf.c)
 *     _vsprintf_l @ 0x1404FFC58 (_vsprintf_l.c)
 *     write_char_0 @ 0x140501F10 (write_char_0.c)
 *     _soutput_s @ 0x1405054B4 (_soutput_s.c)
 *     _swoutput_s @ 0x1405055A8 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
