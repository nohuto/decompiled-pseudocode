/*
 * XREFs of sub_1800173B8 @ 0x1800173B8
 * Callers:
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 *     sub_1800D5A20 @ 0x1800D5A20 (sub_1800D5A20.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800173B8(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
