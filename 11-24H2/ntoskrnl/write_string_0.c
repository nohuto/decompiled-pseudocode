/*
 * XREFs of write_string_0 @ 0x1404FF878
 * Callers:
 *     _output_l @ 0x1404FEF58 (_output_l.c)
 *     _output_s @ 0x140502444 (_output_s.c)
 * Callees:
 *     write_char_0 @ 0x1404FF7D0 (write_char_0.c)
 */

int __fastcall write_string_0(char *a1, int a2, FILE *a3, _DWORD *a4)
{
  int result; // eax
  int v7; // ebx

  result = a3->_flag;
  v7 = a2;
  if ( (result & 0x40) == 0 || a3->_base )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = write_char_0(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
