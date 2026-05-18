/*
 * XREFs of sub_18000B344 @ 0x18000B344
 * Callers:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 * Callees:
 *     _o_terminate @ 0x18000C058 (_o_terminate.c)
 *     __current_exception @ 0x18000C070 (__current_exception.c)
 *     __current_exception_context @ 0x18000C07C (__current_exception_context.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000B344(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
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
