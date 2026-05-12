/*
 * XREFs of NvmeNamespaceCleanupSanitizeContext @ 0x1400FC698
 * Callers:
 *     NvmeNamespaceInitializeSanitizeContext @ 0x140104C40 (NvmeNamespaceInitializeSanitizeContext.c)
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010B154 (NvmeNamespaceReinitializeMediaIoctl.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010B7C0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 * Callees:
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

void __fastcall NvmeNamespaceCleanupSanitizeContext(__int64 a1)
{
  struct _IO_WORKITEM *v2; // rcx
  __int64 v3; // rdx

  v2 = *(struct _IO_WORKITEM **)(a1 + 632);
  if ( v2 )
  {
    IoFreeWorkItem(v2);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 616);
  if ( v3 )
  {
    NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), v3);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_DWORD *)(a1 + 644) = 0;
  *(_BYTE *)(a1 + 642) = 0;
}
