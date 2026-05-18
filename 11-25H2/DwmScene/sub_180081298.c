/*
 * XREFs of sub_180081298 @ 0x180081298
 * Callers:
 *     sub_1800C4550 @ 0x1800C4550 (sub_1800C4550.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800325B8 @ 0x1800325B8 (sub_1800325B8.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180081298(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1 + 17;
  v12 = a3;
  if ( sub_18004099C((__int64)(a1 + 17), (__int64)&v12) == a1[17] )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    sub_1800325B8(v7, &v10, a3);
    (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 16LL))(a1, &v10);
    if ( v11 )
      sub_18001050C(v11);
  }
  v12 = a3;
  v8 = sub_18004099C((__int64)v6, (__int64)&v12);
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
