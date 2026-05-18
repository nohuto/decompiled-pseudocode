/*
 * XREFs of sub_18003FF30 @ 0x18003FF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003DAC4 @ 0x18003DAC4 (sub_18003DAC4.c)
 */

LPVOID __fastcall sub_18003FF30(__int64 a1)
{
  void *v1; // rcx
  LPVOID result; // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return sub_18003DAC4(v1);
  return result;
}
