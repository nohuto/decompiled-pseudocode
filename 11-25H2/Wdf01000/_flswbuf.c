/*
 * XREFs of _flswbuf @ 0x1400851C8
 * Callers:
 *     _fputwc_nolock @ 0x140085098 (_fputwc_nolock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flswbuf(int ch, _iobuf *str)
{
  str->_flag |= 0x20u;
  return 0xFFFFLL;
}
