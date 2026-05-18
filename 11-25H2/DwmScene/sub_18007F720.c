/*
 * XREFs of sub_18007F720 @ 0x18007F720
 * Callers:
 *     sub_1800445E4 @ 0x1800445E4 (sub_1800445E4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18007F720(__int64 a1, _QWORD *a2)
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
    sub_180011B04(v7 + 72, &v5);
    sub_18002851C(v5 + 24, (__int64)v9);
    if ( v6 )
      sub_18001050C(v6);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 40LL))(v3, a2);
    sub_180010F44((__int64)v9);
    if ( v8 )
      sub_18001050C(v8);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
