/*
 * XREFs of sub_180036480 @ 0x180036480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180036480(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+8h]

  v10 = unknown_libname_81(&v8, a2);
  v3 = unknown_libname_81(v9, (_QWORD *)(v2 + 8));
  result = v4(v5, v3);
  v7 = v10[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
