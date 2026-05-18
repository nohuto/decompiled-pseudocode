/*
 * XREFs of sub_180026124 @ 0x180026124
 * Callers:
 *     sub_180026124 @ 0x180026124 (sub_180026124.c)
 *     sub_1800264B4 @ 0x1800264B4 (sub_1800264B4.c)
 *     sub_180027D3C @ 0x180027D3C (sub_180027D3C.c)
 *     sub_18007CA84 @ 0x18007CA84 (sub_18007CA84.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180026124 @ 0x180026124 (sub_180026124.c)
 */

__int64 __fastcall sub_180026124(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180026124(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_180010134(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
