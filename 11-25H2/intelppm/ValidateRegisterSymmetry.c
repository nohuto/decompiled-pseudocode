/*
 * XREFs of ValidateRegisterSymmetry @ 0x14002FC38
 * Callers:
 *     ValidateCpcResourcePrioritiesSymmetry @ 0x14002EC80 (ValidateCpcResourcePrioritiesSymmetry.c)
 *     ValidateCpcSymmetry @ 0x14002EE80 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x14002F374 (ValidatePctPtcSymmetry.c)
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
