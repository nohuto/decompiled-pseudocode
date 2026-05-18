/*
 * XREFs of sub_1800BC20C @ 0x1800BC20C
 * Callers:
 *     sub_1800BC20C @ 0x1800BC20C (sub_1800BC20C.c)
 *     sub_1800BC994 @ 0x1800BC994 (sub_1800BC994.c)
 *     sub_1800BDDAC @ 0x1800BDDAC (sub_1800BDDAC.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800BC20C @ 0x1800BC20C (sub_1800BC20C.c)
 */

__int64 __fastcall sub_1800BC20C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1800BC20C(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_180010134(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
