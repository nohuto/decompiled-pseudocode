/*
 * XREFs of sub_180037274 @ 0x180037274
 * Callers:
 *     sub_1800371C0 @ 0x1800371C0 (sub_1800371C0.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180037274(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
