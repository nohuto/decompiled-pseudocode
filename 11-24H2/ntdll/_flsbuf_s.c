/*
 * XREFs of _flsbuf_s @ 0x180131450
 * Callers:
 *     _soutput_s @ 0x18012EC94 (_soutput_s.c)
 *     write_char_1 @ 0x18012ED88 (write_char_1.c)
 *     _swoutput_s @ 0x18012FB14 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flsbuf_s(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 24) |= 0x20u;
  return 0xFFFFFFFFLL;
}
