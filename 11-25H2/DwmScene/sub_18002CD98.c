/*
 * XREFs of sub_18002CD98 @ 0x18002CD98
 * Callers:
 *     sub_18002CD98 @ 0x18002CD98 (sub_18002CD98.c)
 *     sub_18002FBAC @ 0x18002FBAC (sub_18002FBAC.c)
 *     sub_180069C78 @ 0x180069C78 (sub_180069C78.c)
 *     sub_1800BEB08 @ 0x1800BEB08 (sub_1800BEB08.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18002CD98 @ 0x18002CD98 (sub_18002CD98.c)
 */

__int64 __fastcall sub_18002CD98(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002CD98(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_180010134(v6, 0x30uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
