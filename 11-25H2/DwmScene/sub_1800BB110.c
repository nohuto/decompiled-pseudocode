/*
 * XREFs of sub_1800BB110 @ 0x1800BB110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180037284 @ 0x180037284 (sub_180037284.c)
 *     sub_1800B612C @ 0x1800B612C (sub_1800B612C.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BB110(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD ***)(a1 + 272);
  if ( v2 )
    sub_180037284(v2);
  v5 = 0LL;
  v3 = sub_1800B9A04(a1, &v6);
  sub_1800B612C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v3, &v5);
  sub_18000E854(&v6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  return sub_18000E854(&v5);
}
