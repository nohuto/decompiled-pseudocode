/*
 * XREFs of sub_18007F880 @ 0x18007F880
 * Callers:
 *     sub_180044744 @ 0x180044744 (sub_180044744.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18007F880(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  _BYTE v9[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    unknown_libname_81(&v7, (_QWORD *)(**(_QWORD **)(a1 + 120) + 40LL));
    v3 = v7;
    sub_180011C04(v7 + 72, &v5);
    sub_18002867C(v5 + 24, (__int64)v9);
    if ( v6 )
      sub_18001060C(v6);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 40LL))(v3, a2);
    sub_180011044((__int64)v9);
    if ( v8 )
      sub_18001060C(v8);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
