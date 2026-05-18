/*
 * XREFs of sub_1800414C0 @ 0x1800414C0
 * Callers:
 *     sub_18005B17C @ 0x18005B17C (sub_18005B17C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180028938 @ 0x180028938 (sub_180028938.c)
 *     sub_18005B9C0 @ 0x18005B9C0 (sub_18005B9C0.c)
 *     sub_180079B50 @ 0x180079B50 (sub_180079B50.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800414C0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  __int64 *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v4 = a1 + 17;
  sub_18001244C(a1 + 17, a2);
  unknown_libname_81(&v10, (_QWORD *)(*a2 + 128LL));
  v5 = (__int64 *)sub_180079B50(v10, &v12);
  sub_180011010(a1 + 15, v5);
  if ( v13 )
    sub_18001050C(v13);
  v6 = (_QWORD *)sub_18005B9C0(*v4, &v12);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v6 + 16LL))(*v6, a1);
  if ( v13 )
    sub_18001050C(v13);
  v7 = (_QWORD *)sub_180011C64((__int64)(a1 + 12), &v12);
  result = (__int64)sub_180028938(a1 + 27, v7);
  if ( v13 )
    result = sub_18001050C(v13);
  if ( v11 )
    result = sub_18001050C(v11);
  v9 = a2[1];
  if ( v9 )
    return sub_18001050C(v9);
  return result;
}
