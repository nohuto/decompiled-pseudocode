/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140A483D0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F2AFC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404900C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140492228 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x1405DB9FC (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1406497C4 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  return 0;
}
