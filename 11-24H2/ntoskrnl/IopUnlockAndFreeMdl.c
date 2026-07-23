/*
 * XREFs of IopUnlockAndFreeMdl @ 0x14025FCC8
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14025F930 (IopFreeCopyObjectsFromIrp.c)
 *     IopCopyCompleteReadIrp @ 0x14025FA30 (IopCopyCompleteReadIrp.c)
 *     IopMcTryUnlockMdl @ 0x14059FE28 (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x14070F4DC (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x140714060 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x140717768 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
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
