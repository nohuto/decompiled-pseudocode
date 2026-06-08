/*
 * XREFs of sub_14002B830 @ 0x14002B830
 * Callers:
 *     sub_14002B890 @ 0x14002B890 (sub_14002B890.c)
 * Callees:
 *     sub_140003460 @ 0x140003460 (sub_140003460.c)
 *     sub_140005938 @ 0x140005938 (sub_140005938.c)
 */

unsigned __int64 __fastcall sub_14002B830(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  __int64 v6; // r9

  v4 = sub_140003460(a1, a2);
  result = sub_140005938();
  v6 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      result = 0xF4240uLL / (1LL << a3);
      v6 = result;
    }
  }
  else
  {
    v6 = 1LL << a3;
  }
  *(_QWORD *)(v4 + 32) = v6;
  return result;
}
