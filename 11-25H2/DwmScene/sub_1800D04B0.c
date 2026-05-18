/*
 * XREFs of sub_1800D04B0 @ 0x1800D04B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800CFFAC @ 0x1800CFFAC (sub_1800CFFAC.c)
 *     sub_1800D0674 @ 0x1800D0674 (sub_1800D0674.c)
 *     sub_1800D1560 @ 0x1800D1560 (sub_1800D1560.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D04B0(__int64 *a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v12[32]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-48h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180011B30((__int64)(a1 + 8));
  v5 = 0;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v13, a2);
    v7 = sub_1800CFFAC(a1 + 12, v6);
    sub_180013128((__int64)v13);
    v8 = sub_1800130AC(a2);
    if ( (unsigned __int8)sub_1800D1670(v7, v8) )
    {
      v9 = sub_180012344((__int64)v12, a2);
      v10 = sub_1800D1560(v7, v9);
      v5 = sub_1800D0674(a1, v10);
    }
  }
  Mtx_unlock(v4);
  return v5;
}
