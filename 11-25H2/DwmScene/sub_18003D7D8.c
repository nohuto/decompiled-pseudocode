/*
 * XREFs of sub_18003D7D8 @ 0x18003D7D8
 * Callers:
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 * Callees:
 *     sub_18003DAC4 @ 0x18003DAC4 (sub_18003DAC4.c)
 */

__int64 __fastcall sub_18003D7D8(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18003DAC4(v1);
  return result;
}
