/*
 * XREFs of sub_18000B714 @ 0x18000B714
 * Callers:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 * Callees:
 *     _o_terminate @ 0x18000C4B8 (_o_terminate.c)
 *     __current_exception @ 0x18000C4D0 (__current_exception.c)
 *     __current_exception_context @ 0x18000C4DC (__current_exception_context.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000B714(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    result = a4(a1);
  }
  return result;
}
