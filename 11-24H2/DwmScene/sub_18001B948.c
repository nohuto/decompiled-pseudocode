/*
 * XREFs of sub_18001B948 @ 0x18001B948
 * Callers:
 *     sub_18001B948 @ 0x18001B948 (sub_18001B948.c)
 *     sub_18001C338 @ 0x18001C338 (sub_18001C338.c)
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 *     sub_18004D088 @ 0x18004D088 (sub_18004D088.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B948 @ 0x18001B948 (sub_18001B948.c)
 */

__int64 __fastcall sub_18001B948(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18001B948(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180011B5C((__int64)v6 + 32);
      result = sub_180010234(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
