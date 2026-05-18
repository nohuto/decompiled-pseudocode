/*
 * XREFs of sub_180040090 @ 0x180040090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003DC24 @ 0x18003DC24 (sub_18003DC24.c)
 */

LPVOID __fastcall sub_180040090(__int64 a1)
{
  void *v1; // rcx
  LPVOID result; // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return sub_18003DC24(v1);
  return result;
}
