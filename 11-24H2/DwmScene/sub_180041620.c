/*
 * XREFs of sub_180041620 @ 0x180041620
 * Callers:
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180028A98 @ 0x180028A98 (sub_180028A98.c)
 *     sub_18005BB20 @ 0x18005BB20 (sub_18005BB20.c)
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180041620(_QWORD *a1, _QWORD *a2)
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
  sub_18001254C(a1 + 17, a2);
  unknown_libname_81(&v10, (_QWORD *)(*a2 + 128LL));
  v5 = (__int64 *)sub_180079CB0(v10, &v12);
  sub_180011110(a1 + 15, v5);
  if ( v13 )
    sub_18001060C(v13);
  v6 = (_QWORD *)sub_18005BB20(*v4, &v12);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v6 + 16LL))(*v6, a1);
  if ( v13 )
    sub_18001060C(v13);
  v7 = (_QWORD *)sub_180011D64((__int64)(a1 + 12), &v12);
  result = (__int64)sub_180028A98(a1 + 27, v7);
  if ( v13 )
    result = sub_18001060C(v13);
  if ( v11 )
    result = sub_18001060C(v11);
  v9 = a2[1];
  if ( v9 )
    return sub_18001060C(v9);
  return result;
}
