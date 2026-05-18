/*
 * XREFs of sub_18007B904 @ 0x18007B904
 * Callers:
 *     sub_18007B6F0 @ 0x18007B6F0 (sub_18007B6F0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800151A0 @ 0x1800151A0 (sub_1800151A0.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 */

_QWORD *__fastcall sub_18007B904(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = *(_DWORD *)(*a2 + 88LL);
  sub_180050140((__int64 *)(a1 + 112), (__int64)&v13, &v14);
  v4 = unknown_libname_81(&v11, a2);
  v6 = *v4;
  *v4 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 40) = v6;
  v7 = v4[1];
  v4[1] = *(_QWORD *)(v5 + 48);
  v8 = v12;
  *(_QWORD *)(v5 + 48) = v7;
  if ( v8 )
    sub_18001050C(v8);
  v9 = (__int64 *)sub_180011C64(a1 + 96, &v11);
  result = sub_1800151A0((_QWORD *)(*a2 + 104LL), v9);
  if ( v12 )
    return (_QWORD *)sub_18001050C(v12);
  return result;
}
