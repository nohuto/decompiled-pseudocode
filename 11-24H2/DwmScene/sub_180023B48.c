/*
 * XREFs of sub_180023B48 @ 0x180023B48
 * Callers:
 *     sub_180023B48 @ 0x180023B48 (sub_180023B48.c)
 *     sub_1800245D8 @ 0x1800245D8 (sub_1800245D8.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_180023B48 @ 0x180023B48 (sub_180023B48.c)
 */

__int64 __fastcall sub_180023B48(__int64 a1, __int64 a2, __int64 a3)
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
      sub_180023B48(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180012508((__int64)v6 + 40, v7);
      result = sub_180010234(v6, 0x68uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
