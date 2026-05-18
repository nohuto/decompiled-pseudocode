/*
 * XREFs of sub_18006323C @ 0x18006323C
 * Callers:
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18004D338 @ 0x18004D338 (sub_18004D338.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006323C(__int64 a1, __int64 a2)
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

  v3 = sub_180032500(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801C5438, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801C5458, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801C5478, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801C5838, 0LL);
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
  v12 = sub_180017054((__int64)v16, (__int64)&unk_1801C8F18);
  sub_18004CE40(v8, &v14, v12);
  sub_18005C134(v14, (__int64)&unk_1801C9278, v11);
  sub_18004D338(v8, (__int64)&unk_1801C9158);
  result = sub_18004D338(v8, (__int64)&unk_1801C9178);
  if ( v15 )
    return sub_18001060C(v15);
  return result;
}
