/*
 * XREFs of sub_18008786C @ 0x18008786C
 * Callers:
 *     sub_180087030 @ 0x180087030 (sub_180087030.c)
 *     sub_180088870 @ 0x180088870 (sub_180088870.c)
 *     sub_180088A00 @ 0x180088A00 (sub_180088A00.c)
 *     sub_1800DB121 @ 0x1800DB121 (sub_1800DB121.c)
 *     sub_1800DB2B0 @ 0x1800DB2B0 (sub_1800DB2B0.c)
 *     unknown_libname_63 @ 0x1800DB2C2 (unknown_libname_63.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008786C(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  result = sub_180012508((__int64)(a1 + 15), a2);
  v5 = (_QWORD *)a1[14];
  if ( v5 )
  {
    LOBYTE(v4) = v5 != a1 + 7;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v5 + 32LL))(v5, v4);
    a1[14] = 0LL;
  }
  v6 = a1[3];
  if ( v6 )
    result = sub_18001060C(v6);
  v7 = a1[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
