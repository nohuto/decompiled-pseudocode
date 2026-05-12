/*
 * XREFs of NvmeNamespaceFreeIoQueueResources @ 0x140103920
 * Callers:
 *     NvmeNamespaceCreateIoQueue2 @ 0x1400FD3FC (NvmeNamespaceCreateIoQueue2.c)
 *     NvmeNamespaceDeleteIoQueue2 @ 0x1400FDD1C (NvmeNamespaceDeleteIoQueue2.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceFreeIoQueueResources(PVOID P)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  struct _KTIMER *v6; // rcx
  struct _KDPC *v7; // rcx

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)g_CpuInfo + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)P + i + 8);
      if ( v3 )
      {
        v4 = *(void **)(v3 + 32);
        if ( v4 )
          ExFreePoolWithTag(v4, 0x4D4E6152u);
        v5 = *(void **)(*((_QWORD *)P + i + 8) + 56LL);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x4D4E6152u);
        ExFreePoolWithTag(*((PVOID *)P + i + 8), 0x4D4E6152u);
        *((_QWORD *)P + i + 8) = 0LL;
      }
    }
    v6 = (struct _KTIMER *)*((_QWORD *)P + 4);
    if ( v6 )
    {
      KeCancelTimer(v6);
      ExFreePoolWithTag(*((PVOID *)P + 4), 0x4D4E6152u);
      *((_QWORD *)P + 4) = 0LL;
    }
    v7 = (struct _KDPC *)*((_QWORD *)P + 3);
    if ( v7 )
    {
      KeRemoveQueueDpc(v7);
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x4D4E6152u);
      *((_QWORD *)P + 3) = 0LL;
    }
    ExFreePoolWithTag(P, 0x4D4E6152u);
  }
}
