/*
 * XREFs of sub_1800CB3D0 @ 0x1800CB3D0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002AD24 @ 0x18002AD24 (sub_18002AD24.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 */

__int64 *__fastcall sub_1800CB3D0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  *(_DWORD *)(a1 + 520) = a2;
  v4 = a3;
  v5 = sub_1800502A0((__int64 *)(a1 + 504), (__int64)&v11, &v12);
  v4 *= 48LL;
  v6 = *(_QWORD *)v5;
  v7 = unknown_libname_81(v10, (_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 40LL) + v4 + 64));
  sub_18002AE30(a1, v7);
  v8 = unknown_libname_81(v10, (_QWORD *)(*(_QWORD *)(v6 + 40) + v4 + 80));
  return sub_18002AD24(a1, v8);
}
