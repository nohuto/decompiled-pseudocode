/*
 * XREFs of _fgetwc_nolock @ 0x18012F69C
 * Callers:
 *     ReadString_1 @ 0x18012E80C (ReadString_1.c)
 *     _whiteout @ 0x18012EC7C (_whiteout.c)
 *     _winput_s @ 0x18012ECD4 (_winput_s.c)
 * Callees:
 *     _filwbuf_s @ 0x180105690 (_filwbuf_s.c)
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *Stream)
{
  wint_t result; // ax
  bool v3; // sf
  char *ptr; // rcx

  if ( Stream )
  {
    v3 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v3 )
    {
      return filwbuf_s();
    }
    else
    {
      ptr = Stream->_ptr;
      result = *(_WORD *)ptr;
      Stream->_ptr = ptr + 2;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
