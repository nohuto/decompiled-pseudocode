/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140A4AE00
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14044EDC4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x1405E7AAC (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1406556C4 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  return 0;
}
