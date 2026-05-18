/*
 * XREFs of sub_1800D0760 @ 0x1800D0760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800CFFAC @ 0x1800CFFAC (sub_1800CFFAC.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800D0760(__int64 *a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180011B30((__int64)(a1 + 8));
  v5 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v9, a2);
  v6 = sub_1800CFFAC(a1 + 12, v5);
  sub_180013128((__int64)v9);
  v7 = sub_1800130AC(a2);
  LOBYTE(v6) = sub_1800D1670(v6, v7);
  Mtx_unlock(v4);
  return v6;
}
