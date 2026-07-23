/*
 * XREFs of PiCMReleaseRegistryPropertyInputData @ 0x1409CDC98
 * Callers:
 *     PiCMSetRegistryProperty @ 0x1409CD848 (PiCMSetRegistryProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleaseRegistryPropertyInputData(__int64 a1)
{
  void *v2; // rcx
  char PreviousMode; // bl
  void *v4; // rdx

  v2 = *(void **)(a1 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( v2 && PreviousMode )
    ExFreePoolWithTag(v2, 0);
  v4 = *(void **)(a1 + 40);
  if ( v4 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, v4);
  return 0LL;
}
