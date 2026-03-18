/*
 * XREFs of _flsbuf @ 0x1401A0C3C
 * Callers:
 *     _vsnwprintf_l @ 0x1401A03EC (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1401A0538 (_vsnprintf_l.c)
 *     write_char_0 @ 0x1401A1EF0 (write_char_0.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
