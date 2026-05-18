/*
 * XREFs of sub_1800630DC @ 0x1800630DC
 * Callers:
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800630DC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  char v5; // r15
  int v6; // esi
  int v7; // r8d
  __int64 v8; // rdi
  bool v9; // cl
  char v10; // al
  char v11; // bl
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  _BYTE v16[32]; // [rsp+50h] [rbp-20h] BYREF

  v3 = sub_1800323A0(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801C4428, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801C4448, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801C4468, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801C4828, 0LL);
  v8 = *(_QWORD *)(a1 + 512);
  v9 = v6 != 0;
  if ( v7 )
    v9 = 1;
  v10 = v9;
  if ( v4 )
    v10 = 1;
  v11 = v10;
  if ( v5 )
    v11 = 1;
  v12 = sub_180016F54((__int64)v16, (__int64)&unk_1801C7F08);
  sub_18004CCE0(v8, &v14, v12);
  sub_18005BFD4(v14, (__int64)&unk_1801C8268, v11);
  sub_18004D1D8(v8, (__int64)&unk_1801C8148);
  result = sub_18004D1D8(v8, (__int64)&unk_1801C8168);
  if ( v15 )
    return sub_18001050C(v15);
  return result;
}
