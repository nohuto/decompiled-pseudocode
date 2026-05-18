/*
 * XREFs of sub_1800239E8 @ 0x1800239E8
 * Callers:
 *     sub_1800239E8 @ 0x1800239E8 (sub_1800239E8.c)
 *     sub_180024478 @ 0x180024478 (sub_180024478.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_1800239E8 @ 0x1800239E8 (sub_1800239E8.c)
 */

__int64 __fastcall sub_1800239E8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1800239E8(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180012408((__int64)v6 + 40, v7);
      result = sub_180010134(v6, 0x68uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
