/*
 * XREFs of sub_180096A04 @ 0x180096A04
 * Callers:
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180096A04(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18001254C((__int64 *)(a1 + 144), a2);
  v3 = unknown_libname_81(v8, a2);
  result = v4(v5, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
