/*
 * XREFs of sub_1800D08C0 @ 0x1800D08C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800D010C @ 0x1800D010C (sub_1800D010C.c)
 *     sub_1800D17D0 @ 0x1800D17D0 (sub_1800D17D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800D08C0(__int64 *a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180011C30((__int64)(a1 + 8));
  v5 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v9, a2);
  v6 = sub_1800D010C(a1 + 12, v5);
  sub_180013228((__int64)v9);
  v7 = sub_1800131AC(a2);
  LOBYTE(v6) = sub_1800D17D0(v6, v7);
  Mtx_unlock(v4);
  return v6;
}
