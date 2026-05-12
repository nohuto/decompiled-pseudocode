/*
 * XREFs of NvmeNamespaceDeleteErrorRecoveryContext @ 0x1400FDBB8
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceDeleteErrorRecoveryContext(__int64 a1)
{
  struct _IO_WORKITEM **v2; // rcx
  struct _IO_WORKITEM *v3; // rcx

  v2 = *(struct _IO_WORKITEM ***)(a1 + 504);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      IoFreeWorkItem(v3);
      **(_QWORD **)(a1 + 504) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 504), 0x4D4E6152u);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
}
