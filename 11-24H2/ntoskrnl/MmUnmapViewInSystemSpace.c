/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140A41A80
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14048C12C (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x1405E509C (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x140653DC4 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  return 0;
}
