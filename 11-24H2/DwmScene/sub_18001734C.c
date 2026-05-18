/*
 * XREFs of sub_18001734C @ 0x18001734C
 * Callers:
 *     sub_1800150CC @ 0x1800150CC (sub_1800150CC.c)
 *     sub_18001DF18 @ 0x18001DF18 (sub_18001DF18.c)
 *     sub_18001E000 @ 0x18001E000 (sub_18001E000.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_18003CA64 @ 0x18003CA64 (sub_18003CA64.c)
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 *     unknown_libname_14 @ 0x1800D5FB8 (unknown_libname_14.c)
 *     sub_1800D6BB1 @ 0x1800D6BB1 (sub_1800D6BB1.c)
 *     sub_1800D6EB4 @ 0x1800D6EB4 (sub_1800D6EB4.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001734C(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
