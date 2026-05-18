/*
 * XREFs of sub_180016360 @ 0x180016360
 * Callers:
 *     sub_180017E90 @ 0x180017E90 (sub_180017E90.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010354 @ 0x180010354 (sub_180010354.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_18001B224 @ 0x18001B224 (sub_18001B224.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180016360(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rax
  __int64 v6; // rbx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (_DWORD *)sub_18001B224(56LL);
  v6 = (__int64)v5;
  v8 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &ISpectreMesh::`vftable';
    v5[3] = 1;
    *(_QWORD *)v5 = off_1800ECB50;
    if ( qword_1801C4440 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C4440 + 8LL))(qword_1801C4440);
    *(_QWORD *)v6 = off_1800EC668;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 44) = 1065353216;
    *(_DWORD *)(v6 + 48) = 1065353216;
    *(_DWORD *)(v6 + 52) = 1065353216;
    v9 = v6;
    v8 = 0LL;
    sub_18001254C((__int64 *)(v6 + 16), a2);
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    sub_18000E954(&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_180010354(&v8);
  return v4;
}
