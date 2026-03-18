/*
 * XREFs of MiUnlockAndFreeDvPatchImage @ 0x14067C928
 * Callers:
 *     MiLockPatchIatForDV @ 0x14067BF00 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiUnlockDriverPages @ 0x140A3E5CC (MiUnlockDriverPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndFreeDvPatchImage(char *P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 15);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    IoFreeMdl(*((PMDL *)P + 15));
  }
  MiUnlockDriverPages(P + 16);
  ExFreePoolWithTag(P, 0);
}
