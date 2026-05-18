/*
 * XREFs of sub_1800D02B0 @ 0x1800D02B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_1800CF330 @ 0x1800CF330 (sub_1800CF330.c)
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800D006C @ 0x1800D006C (sub_1800D006C.c)
 *     sub_1800D1604 @ 0x1800D1604 (sub_1800D1604.c)
 *     sub_1800D1698 @ 0x1800D1698 (sub_1800D1698.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800D02B0(__int64 a1)
{
  __int64 *v1; // rsi
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _BYTE v9[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v10[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = (__int64 *)(a1 + 96);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  sub_180011C30(a1 + 64);
  v3 = (_QWORD *)*v1;
  sub_1800CF330((__int64)v1, (__int64)v1, *(char **)(*v1 + 8));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v1[1] = 0LL;
  v4 = sub_1800D1604(v10);
  v5 = (_QWORD *)sub_1800CF6A0(v1, (__int64)v9, (__int64)&unk_1801C9900);
  sub_1800D006C(*v5 + 64LL, v4);
  sub_1800D1698(v10);
  v6 = sub_1800D1604(v10);
  v7 = (_QWORD *)sub_1800CF6A0(v1, (__int64)v9, (__int64)&unk_1801C9920);
  sub_1800D006C(*v7 + 64LL, v6);
  sub_1800D1698(v10);
  return Mtx_unlock(v2);
}
