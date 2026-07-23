/*
 * XREFs of KeCountSetBitsGroupAffinity @ 0x140468400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeCountSetBitsGroupAffinity(unsigned __int64 *a1)
{
  return __popcnt(*a1);
}
