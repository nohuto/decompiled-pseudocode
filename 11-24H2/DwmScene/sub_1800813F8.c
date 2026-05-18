/*
 * XREFs of sub_1800813F8 @ 0x1800813F8
 * Callers:
 *     sub_1800C46B0 @ 0x1800C46B0 (sub_1800C46B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180032718 @ 0x180032718 (sub_180032718.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800813F8(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1 + 17;
  v12 = a3;
  if ( sub_180040AFC((__int64)(a1 + 17), (__int64)&v12) == a1[17] )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    sub_180032718(v7, &v10, a3);
    (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 16LL))(a1, &v10);
    if ( v11 )
      sub_18001060C(v11);
  }
  v12 = a3;
  v8 = sub_180040AFC((__int64)v6, (__int64)&v12);
  if ( v8 == *v6 )
  {
    *(_OWORD *)a2 = 0LL;
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    unknown_libname_81(a2, (_QWORD *)(v8 + 40));
  }
  return a2;
}
