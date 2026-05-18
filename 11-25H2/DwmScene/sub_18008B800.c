/*
 * XREFs of sub_18008B800 @ 0x18008B800
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008B800(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // r8
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD *, __int64); // r10
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), &v13);
  unknown_libname_81(&v15, a5);
  v9 = unknown_libname_81(v16, &v13);
  v11(a1, a3, a4, v9, v10);
  sub_1800254DC(*(_QWORD *)(a1 + 232), a2);
  if ( v14 )
    sub_18001050C(v14);
  return a2;
}
