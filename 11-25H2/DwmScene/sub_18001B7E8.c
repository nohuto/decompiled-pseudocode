/*
 * XREFs of sub_18001B7E8 @ 0x18001B7E8
 * Callers:
 *     sub_18001B7E8 @ 0x18001B7E8 (sub_18001B7E8.c)
 *     sub_18001C1D8 @ 0x18001C1D8 (sub_18001C1D8.c)
 *     sub_18002A7CC @ 0x18002A7CC (sub_18002A7CC.c)
 *     sub_18004CF28 @ 0x18004CF28 (sub_18004CF28.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B7E8 @ 0x18001B7E8 (sub_18001B7E8.c)
 */

__int64 __fastcall sub_18001B7E8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18001B7E8(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180011A5C((__int64)v6 + 32);
      result = sub_180010134(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
