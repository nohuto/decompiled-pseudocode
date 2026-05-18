/*
 * XREFs of sub_1800D1B50 @ 0x1800D1B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800D1868 @ 0x1800D1868 (sub_1800D1868.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1B50(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD *); // r9
  __int64 v3; // r10
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  _QWORD v8[7]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+68h] [rbp-10h]

  unknown_libname_81(&v6, a2);
  v9 = 0LL;
  v9 = sub_1800D1868(v8, &v6);
  v4 = v2(v3, v8);
  if ( v7 )
    sub_18001060C(v7);
  return v4;
}
