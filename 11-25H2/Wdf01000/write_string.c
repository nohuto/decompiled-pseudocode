/*
 * XREFs of write_string @ 0x140085004
 * Callers:
 *     _woutput_l @ 0x14008464C (_woutput_l.c)
 * Callees:
 *     write_char @ 0x140084F58 (write_char.c)
 */

void __fastcall write_string(wchar_t *string, int len, _iobuf *f, int *pnumwritten)
{
  int v6; // ebx

  v6 = len;
  if ( (f->_flag & 0x40) == 0 || f->_base )
  {
    if ( len > 0 )
    {
      do
      {
        --v6;
        write_char(*string++, f, pnumwritten);
      }
      while ( *pnumwritten != -1 && v6 > 0 );
    }
  }
  else
  {
    *pnumwritten += len;
  }
}
