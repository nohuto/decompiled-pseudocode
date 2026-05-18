/*
 * XREFs of sub_180026870 @ 0x180026870
 * Callers:
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_1800BCF80 @ 0x1800BCF80 (sub_1800BCF80.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_1800517B8 @ 0x1800517B8 (sub_1800517B8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_180026870(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // r15d
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h]
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF

  sub_180027DD0(a1, 1LL, 0LL);
  sub_180027DD0(v5, (unsigned int)(v4 + 2), v4);
  unknown_libname_81(&v14, (_QWORD *)(*a2 + 112LL));
  v6 = v14 != 0 ? 0x80 : 0;
  if ( v15 )
    sub_18001060C(v15);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_1800269B8(a1, v9, v8, v7, v6, 0LL);
  unknown_libname_81(&v14, (_QWORD *)(*a2 + 96LL));
  sub_1800517B8(v10, &v14);
  if ( *(_QWORD *)(a1 + 152) )
  {
    unknown_libname_81(&v14, (_QWORD *)(*a2 + 112LL));
    sub_1800517B8(v11, &v14);
  }
  v16 = *(_DWORD *)(*a2 + 88LL);
  v12 = sub_18002633C((_QWORD *)(a1 + 120), (__int64)&v14, &v16);
  return sub_18001254C((__int64 *)(*(_QWORD *)v12 + 40LL), a2);
}
