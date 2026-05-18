/*
 * XREFs of sub_180030E44 @ 0x180030E44
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002C43C @ 0x18002C43C (sub_18002C43C.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180030E44(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = sub_1800323A0(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801C4628, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801C4648, 0LL);
  if ( v3 && v4 )
    sub_180032AC8(0LL);
  *(_BYTE *)(*(_QWORD *)(a1 + 968) + 8LL) = 0;
  v5 = *(_QWORD **)(a1 + 968);
  v6 = *(_QWORD *)(a1 + 944);
  sub_180027FBC((__int64)v5);
  v5[2] = v6;
  v7 = v5[4];
  v8 = v5[5];
  if ( v7 != v8 )
  {
    sub_18002C43C(v7, v8);
    v5[5] = v5[4];
  }
  v5[3] = *sub_180011B8C(&v10);
  return sub_18002815C((__int64)v5);
}
