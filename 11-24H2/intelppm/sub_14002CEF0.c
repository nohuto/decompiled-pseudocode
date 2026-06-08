/*
 * XREFs of sub_14002CEF0 @ 0x14002CEF0
 * Callers:
 *     sub_14002CE38 @ 0x14002CE38 (sub_14002CE38.c)
 *     sub_14002CF28 @ 0x14002CF28 (sub_14002CF28.c)
 * Callees:
 *     sub_14002CF28 @ 0x14002CF28 (sub_14002CF28.c)
 */

__int64 __fastcall sub_14002CEF0(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x200) != 0 )
    return sub_14002CF28(a1, *a1, a2);
  else
    return *a1;
}
