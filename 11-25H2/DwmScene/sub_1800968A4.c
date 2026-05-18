/*
 * XREFs of sub_1800968A4 @ 0x1800968A4
 * Callers:
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800968A4(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18001244C((__int64 *)(a1 + 144), a2);
  v3 = unknown_libname_81(v8, a2);
  result = v4(v5, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
