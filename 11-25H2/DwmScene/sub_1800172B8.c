/*
 * XREFs of sub_1800172B8 @ 0x1800172B8
 * Callers:
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 *     sub_1800D58C0 @ 0x1800D58C0 (sub_1800D58C0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800172B8(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
