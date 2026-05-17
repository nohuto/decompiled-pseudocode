/*
 * XREFs of _fgetwc_nolock @ 0x18013146C
 * Callers:
 *     ReadString_1 @ 0x1801305DC (ReadString_1.c)
 *     _whiteout @ 0x180130A4C (_whiteout.c)
 *     _winput_s @ 0x180130AA4 (_winput_s.c)
 * Callees:
 *     _filwbuf_s @ 0x18010AB20 (_filwbuf_s.c)
 *     _invalid_parameter @ 0x180120778 (_invalid_parameter.c)
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
