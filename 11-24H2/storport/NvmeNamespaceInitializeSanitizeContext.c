/*
 * XREFs of NvmeNamespaceInitializeSanitizeContext @ 0x140104C40
 * Callers:
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010B154 (NvmeNamespaceReinitializeMediaIoctl.c)
 * Callees:
 *     NvmeNamespaceCleanupSanitizeContext @ 0x1400FC698 (NvmeNamespaceCleanupSanitizeContext.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 */

__int64 __fastcall NvmeNamespaceInitializeSanitizeContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 ExtendedCommand; // rax
  PIO_WORKITEM WorkItem; // rax

  v4 = 0;
  ExtendedCommand = NvmeControllerGetExtendedCommand(*(_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 616) = ExtendedCommand;
  if ( ExtendedCommand
    && (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8)), (*(_QWORD *)(a1 + 632) = WorkItem) != 0LL) )
  {
    *(_WORD *)(a1 + 640) = 0;
    *(_QWORD *)(a1 + 624) = a2;
    *(_BYTE *)(a1 + 642) = 0;
  }
  else
  {
    v4 = -1073741670;
    NvmeNamespaceCleanupSanitizeContext(a1);
  }
  return v4;
}
