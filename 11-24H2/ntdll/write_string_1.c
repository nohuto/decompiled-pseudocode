/*
 * XREFs of write_string_1 @ 0x18012D060
 * Callers:
 *     _output_s @ 0x18012C540 (_output_s.c)
 * Callees:
 *     write_char_1 @ 0x18012CFB8 (write_char_1.c)
 */

__int64 __fastcall write_string_1(unsigned __int8 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // ebx

  result = *(unsigned int *)(a3 + 24);
  v7 = a2;
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = write_char_1(*a1++, a3, a4);
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
