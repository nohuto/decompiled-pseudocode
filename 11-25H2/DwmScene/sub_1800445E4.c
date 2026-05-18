/*
 * XREFs of sub_1800445E4 @ 0x1800445E4
 * Callers:
 *     sub_180045A18 @ 0x180045A18 (sub_180045A18.c)
 *     sub_180045A50 @ 0x180045A50 (sub_180045A50.c)
 *     sub_180045A88 @ 0x180045A88 (sub_180045A88.c)
 *     sub_180045AC0 @ 0x180045AC0 (sub_180045AC0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18007F720 @ 0x18007F720 (sub_18007F720.c)
 */

_QWORD *__fastcall sub_1800445E4(__int64 a1, _QWORD *a2, int a3)
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
    v5 = (__int64 *)sub_18007F720(a1, v12);
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
      sub_18001050C(v11);
  }
  if ( (v6 & 1) != 0 && v13 )
    sub_18001050C(v13);
  return a2;
}
