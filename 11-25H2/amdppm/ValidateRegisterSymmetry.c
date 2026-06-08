/*
 * XREFs of ValidateRegisterSymmetry @ 0x140031690
 * Callers:
 *     ValidateCpcResourcePrioritiesSymmetry @ 0x1400304B4 (ValidateCpcResourcePrioritiesSymmetry.c)
 *     ValidateCpcSymmetry @ 0x1400306B4 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x140030C78 (ValidatePctPtcSymmetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateRegisterSymmetry(_BYTE *a1, const void *a2)
{
  SIZE_T v2; // rbx

  if ( !*a1 || (v2 = 12LL, *a1 == 10) )
    v2 = 2LL;
  return RtlCompareMemory(a1, a2, v2) == v2;
}
