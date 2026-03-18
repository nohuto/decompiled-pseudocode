/*
 * XREFs of PiCMReleasePropertyInputData @ 0x1409F78F0
 * Callers:
 *     PiCMSetObjectProperty @ 0x1409F75AC (PiCMSetObjectProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleasePropertyInputData(__int64 a1)
{
  void *v2; // rcx
  char PreviousMode; // bl
  void *v4; // rcx

  v2 = *(void **)(a1 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( v2 && PreviousMode )
    ExFreePoolWithTag(v2, 0);
  v4 = *(void **)(a1 + 56);
  if ( v4 && PreviousMode )
    ExFreePoolWithTag(v4, 0);
  return 0LL;
}
