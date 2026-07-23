/*
 * XREFs of RtlIsCodeInEcRanges @ 0x140B66104
 * Callers:
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1407F61D0 (MiPrepareToHotPatchImagePatchCallback.c)
 *     RtlApplyHotPatch @ 0x140B65BA0 (RtlApplyHotPatch.c)
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
