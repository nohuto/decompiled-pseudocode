/*
 * XREFs of sub_180044744 @ 0x180044744
 * Callers:
 *     sub_180045B78 @ 0x180045B78 (sub_180045B78.c)
 *     sub_180045BB0 @ 0x180045BB0 (sub_180045BB0.c)
 *     sub_180045BE8 @ 0x180045BE8 (sub_180045BE8.c)
 *     sub_180045C20 @ 0x180045C20 (sub_180045C20.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18007F880 @ 0x18007F880 (sub_18007F880.c)
 */

_QWORD *__fastcall sub_180044744(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rdx
  __int64 *v5; // rax
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  _BYTE v12[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v4 = (_QWORD *)(a1 + 136);
  if ( !a3 || *v4 )
  {
    v5 = unknown_libname_81(&v10, v4);
    v6 = 6;
  }
  else
  {
    v5 = (__int64 *)sub_18007F880(a1, v12);
    v6 = 5;
  }
  v7 = *v5;
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = v5[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a2 = v7;
  a2[1] = v5[1];
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v11 )
      sub_18001060C(v11);
  }
  if ( (v6 & 1) != 0 && v13 )
    sub_18001060C(v13);
  return a2;
}
