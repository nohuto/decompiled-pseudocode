/*
 * XREFs of sub_180098C10 @ 0x180098C10
 * Callers:
 *     sub_180099188 @ 0x180099188 (sub_180099188.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_1800123C8 @ 0x1800123C8 (sub_1800123C8.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18002FBFC @ 0x18002FBFC (sub_18002FBFC.c)
 */

void __fastcall sub_180098C10(__int64 *a1, unsigned __int64 a2, _QWORD **a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r9
  _QWORD *i; // r8
  __int64 v13; // r8
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      sub_180013278();
    v14 = a2;
    v8 = sub_1800109F8((__int64)a1, &v14);
    *a1 = v8;
    v10 = (_QWORD *)v8;
    a1[1] = v8;
    a1[2] = v8 + 16 * a2;
    v11 = (_QWORD *)*a4;
    for ( i = *a3; i != v11; i = (_QWORD *)(v13 + 16) )
    {
      sub_1800123C8(v9, v10, i);
      v10 += 2;
    }
    sub_180012140((__int64)v10, (__int64)v10);
    v14 = 0LL;
    a1[1] = (__int64)v10;
    sub_18002FBFC((__int64 *)&v14);
  }
}
