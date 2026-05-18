/*
 * XREFs of sub_180026710 @ 0x180026710
 * Callers:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_1800BCE20 @ 0x1800BCE20 (sub_1800BCE20.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800261DC @ 0x1800261DC (sub_1800261DC.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_180026710(__int64 a1, _QWORD *a2)
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

  sub_180027C70(a1, 1LL, 0LL);
  sub_180027C70(v5, (unsigned int)(v4 + 2), v4);
  unknown_libname_81(&v14, (_QWORD *)(*a2 + 112LL));
  v6 = v14 != 0 ? 0x80 : 0;
  if ( v15 )
    sub_18001050C(v15);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_180026858(a1, v9, v8, v7, v6, 0LL);
  unknown_libname_81(&v14, (_QWORD *)(*a2 + 96LL));
  sub_180051658(v10, &v14);
  if ( *(_QWORD *)(a1 + 152) )
  {
    unknown_libname_81(&v14, (_QWORD *)(*a2 + 112LL));
    sub_180051658(v11, &v14);
  }
  v16 = *(_DWORD *)(*a2 + 88LL);
  v12 = sub_1800261DC((_QWORD *)(a1 + 120), (__int64)&v14, &v16);
  return sub_18001244C((__int64 *)(*(_QWORD *)v12 + 40LL), a2);
}
