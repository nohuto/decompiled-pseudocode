/*
 * XREFs of sub_18001DAA0 @ 0x18001DAA0
 * Callers:
 *     sub_18001E7A4 @ 0x18001E7A4 (sub_18001E7A4.c)
 * Callees:
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_180011FD4 @ 0x180011FD4 (sub_180011FD4.c)
 *     sub_180012F0C @ 0x180012F0C (sub_180012F0C.c)
 *     sub_180012FE0 @ 0x180012FE0 (sub_180012FE0.c)
 *     unknown_libname_85 @ 0x18001E02C (unknown_libname_85.c)
 */

__int64 *__fastcall sub_18001DAA0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  void *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    sub_180011AA0();
  v7 = a1[3];
  v8 = v4 + a2;
  v16 = sub_180012F0C(v4 + a2, v7, 0x7FFFFFFFFFFFFFFEuLL);
  v10 = sub_180011FD4(v9, &v16);
  v11 = v16;
  v12 = v10;
  a1[3] = v16;
  a1[2] = v8;
  if ( v7 <= 7 )
  {
    unknown_libname_85(v11, v10, a1, v4, a4);
  }
  else
  {
    v13 = (void *)*a1;
    unknown_libname_85(v11, v10, *a1, v4, a4);
    sub_180012FE0(v14, v13, v7);
  }
  *a1 = v12;
  return a1;
}
