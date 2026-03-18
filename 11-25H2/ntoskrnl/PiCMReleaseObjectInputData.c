/*
 * XREFs of PiCMReleaseObjectInputData @ 0x140A13980
 * Callers:
 *     PiCMDeleteDevice @ 0x140AC08A4 (PiCMDeleteDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(v1, 0);
  return 0LL;
}
