/*
 * XREFs of sub_1800BB270 @ 0x1800BB270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800373E4 @ 0x1800373E4 (sub_1800373E4.c)
 *     sub_1800B628C @ 0x1800B628C (sub_1800B628C.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BB270(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD ***)(a1 + 272);
  if ( v2 )
    sub_1800373E4(v2);
  v5 = 0LL;
  v3 = sub_1800B9B64(a1, &v6);
  sub_1800B628C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v3, &v5);
  sub_18000E954(&v6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  return sub_18000E954(&v5);
}
