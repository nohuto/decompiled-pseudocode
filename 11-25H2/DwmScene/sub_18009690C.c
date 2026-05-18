/*
 * XREFs of sub_18009690C @ 0x18009690C
 * Callers:
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_1800978E0 @ 0x1800978E0 (sub_1800978E0.c)
 *     sub_180098368 @ 0x180098368 (sub_180098368.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009690C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD *); // r9
  __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_18001244C((__int64 *)(a1 + 144), a2);
  sub_18001244C((__int64 *)(a1 + 160), a3);
  unknown_libname_81(&v12, a3);
  v6 = unknown_libname_81(v13, a2);
  result = v7(v8, v6);
  v10 = a2[1];
  if ( v10 )
    result = sub_18001050C(v10);
  v11 = a3[1];
  if ( v11 )
    return sub_18001050C(v11);
  return result;
}
