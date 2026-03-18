/*
 * XREFs of IopUnlockAndFreeMdl @ 0x140268818
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14026850C (IopFreeCopyObjectsFromIrp.c)
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     IopMcTryUnlockMdl @ 0x1405A2EE8 (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x14071194C (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x1407164D0 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x140719BD8 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 */

void __fastcall IopUnlockAndFreeMdl(PMDL Mdl)
{
  struct _MDL *Next; // rbx

  do
  {
    if ( (Mdl->MdlFlags & 5) == 1 )
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    if ( (Mdl->MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    Next = Mdl->Next;
    IoFreeMdl(Mdl);
    Mdl = Next;
  }
  while ( Next );
}
