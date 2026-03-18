/*
 * XREFs of PiCMReleaseRegistryPropertyInputData @ 0x14099B528
 * Callers:
 *     PiCMSetRegistryProperty @ 0x14099B0D8 (PiCMSetRegistryProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
