/*
 * XREFs of ValidateRegisterSymmetry @ 0x140032890
 * Callers:
 *     ValidateCpcResourcePrioritiesSymmetry @ 0x1400316B4 (ValidateCpcResourcePrioritiesSymmetry.c)
 *     ValidateCpcSymmetry @ 0x1400318B4 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x140031E78 (ValidatePctPtcSymmetry.c)
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
