/*
 * XREFs of NvmeNamespaceCreateErrorRecoveryContext @ 0x1400FCF9C
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeNamespaceCreateErrorRecoveryContext(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 Pool; // rax
  __int64 v4; // rax

  v2 = 0;
  Pool = RaidAllocatePool(64LL, 200LL, 1296982354LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 504) = Pool;
  if ( Pool )
  {
    **(_QWORD **)(a1 + 504) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    v4 = *(_QWORD *)(a1 + 504);
    if ( *(_QWORD *)v4 )
    {
      *(_BYTE *)(v4 + 37) = 10;
    }
    else
    {
      v2 = -1073741670;
      if ( v4 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 504), 0x4D4E6152u);
        *(_QWORD *)(a1 + 504) = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
