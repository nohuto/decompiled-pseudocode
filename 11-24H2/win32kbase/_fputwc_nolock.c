/*
 * XREFs of _fputwc_nolock @ 0x1401A202C
 * Callers:
 *     write_char @ 0x1401A1558 (write_char.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x14011C0B0 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 *     _flswbuf @ 0x1401A21A8 (_flswbuf.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Ch, FILE *File)
{
  wint_t result; // ax
  bool v3; // sf

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return flswbuf(Ch);
    }
    else
    {
      *(_WORD *)File->_ptr = Ch;
      result = Ch;
      File->_ptr += 2;
    }
  }
  else
  {
    CIgnoreInputQueue::MarkInvalid(0LL);
    return -1;
  }
  return result;
}
