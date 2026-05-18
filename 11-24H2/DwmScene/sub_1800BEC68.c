/*
 * XREFs of sub_1800BEC68 @ 0x1800BEC68
 * Callers:
 *     sub_1800BDF0C @ 0x1800BDF0C (sub_1800BDF0C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 *     sub_18002CEF8 @ 0x18002CEF8 (sub_18002CEF8.c)
 */

_QWORD *__fastcall sub_1800BEC68(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // r10
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)*a1;
  v6 = a3;
  v13 = a3;
  if ( a3 == *v4 && *(_BYTE *)(a4 + 25) )
  {
    sub_18002CEF8((__int64)a1, (__int64)a1, v4[1]);
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    a1[1] = 0LL;
  }
  else
  {
    while ( v6 != a4 )
    {
      sub_18001C420(&v13);
      v14 = v10;
      sub_18001C420(&v14);
      v12 = sub_180027298(a1, v11);
      sub_180010234(v12, 0x30uLL);
      v6 = v13;
    }
  }
  *a2 = a4;
  return a2;
}
