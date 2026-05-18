/*
 * XREFs of sub_1800D0610 @ 0x1800D0610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800D010C @ 0x1800D010C (sub_1800D010C.c)
 *     sub_1800D07D4 @ 0x1800D07D4 (sub_1800D07D4.c)
 *     sub_1800D16C0 @ 0x1800D16C0 (sub_1800D16C0.c)
 *     sub_1800D17D0 @ 0x1800D17D0 (sub_1800D17D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D0610(__int64 *a1, __int64 a2)
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
  sub_180011C30((__int64)(a1 + 8));
  v5 = 0;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v13, a2);
    v7 = sub_1800D010C(a1 + 12, v6);
    sub_180013228((__int64)v13);
    v8 = sub_1800131AC(a2);
    if ( (unsigned __int8)sub_1800D17D0(v7, v8) )
    {
      v9 = sub_180012444((__int64)v12, a2);
      v10 = sub_1800D16C0(v7, v9);
      v5 = sub_1800D07D4(a1, v10);
    }
  }
  Mtx_unlock(v4);
  return v5;
}
