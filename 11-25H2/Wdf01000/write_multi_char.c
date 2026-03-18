/*
 * XREFs of write_multi_char @ 0x140084FAC
 * Callers:
 *     _woutput_l @ 0x14008464C (_woutput_l.c)
 * Callees:
 *     write_char @ 0x140084F58 (write_char.c)
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
