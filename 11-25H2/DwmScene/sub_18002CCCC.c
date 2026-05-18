/*
 * XREFs of sub_18002CCCC @ 0x18002CCCC
 * Callers:
 *     sub_18002CCCC @ 0x18002CCCC (sub_18002CCCC.c)
 *     sub_18002FB4C @ 0x18002FB4C (sub_18002FB4C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18002CCCC @ 0x18002CCCC (sub_18002CCCC.c)
 */

__int64 __fastcall sub_18002CCCC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002CCCC(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180013128((__int64)v6 + 64);
      result = sub_180010134(v6, 0x60uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
