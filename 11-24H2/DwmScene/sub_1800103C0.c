/*
 * XREFs of sub_1800103C0 @ 0x1800103C0
 * Callers:
 *     sub_1800103A0 @ 0x1800103A0 (sub_1800103A0.c)
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800103C0(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
