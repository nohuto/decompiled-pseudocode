/*
 * XREFs of write_multi_char_0 @ 0x1801299DC
 * Callers:
 *     _woutput_l @ 0x180129080 (_woutput_l.c)
 * Callees:
 *     write_char_0 @ 0x18012998C (write_char_0.c)
 */

void __fastcall write_multi_char_0(wchar_t a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      write_char_0(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
