/*
 * XREFs of RtlIsCodeInEcRanges @ 0x14082F334
 * Callers:
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1407F5AE0 (MiPrepareToHotPatchImagePatchCallback.c)
 *     RtlApplyHotPatch @ 0x140B63AD0 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsCodeInEcRanges(unsigned int a1, unsigned int *a2, unsigned int a3)
{
  unsigned int i; // r9d

  for ( i = 0; i < a3; ++i )
  {
    if ( a1 >= *a2 && a1 < *a2 + a2[1] )
      return 1;
    a2 += 2;
  }
  return 0;
}
