/*
 * XREFs of write_multi_char @ 0x140084F9C
 * Callers:
 *     _woutput_l @ 0x14008463C (_woutput_l.c)
 * Callees:
 *     write_char @ 0x140084F48 (write_char.c)
 */

void __fastcall write_multi_char(wchar_t ch, int num, _iobuf *f, int *pnumwritten)
{
  int v6; // ebx

  if ( num > 0 )
  {
    v6 = num;
    do
    {
      --v6;
      write_char(ch, f, pnumwritten);
    }
    while ( *pnumwritten != -1 && v6 > 0 );
  }
}
