/*
 * XREFs of sub_180030FA4 @ 0x180030FA4
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 * Callees:
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_18002C59C @ 0x18002C59C (sub_18002C59C.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180030FA4(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = sub_180032500(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801C5638, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801C5658, 0LL);
  if ( v3 && v4 )
    sub_180032C28(0LL);
  *(_BYTE *)(*(_QWORD *)(a1 + 968) + 8LL) = 0;
  v5 = *(_QWORD **)(a1 + 968);
  v6 = *(_QWORD *)(a1 + 944);
  sub_18002811C((__int64)v5);
  v5[2] = v6;
  v7 = v5[4];
  v8 = v5[5];
  if ( v7 != v8 )
  {
    sub_18002C59C(v7, v8);
    v5[5] = v5[4];
  }
  v5[3] = *sub_180011C8C(&v10);
  return sub_1800282BC((__int64)v5);
}
