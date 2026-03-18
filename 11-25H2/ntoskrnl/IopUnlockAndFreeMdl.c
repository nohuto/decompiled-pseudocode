/*
 * XREFs of IopUnlockAndFreeMdl @ 0x1402D3518
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x1402D3208 (IopFreeCopyObjectsFromIrp.c)
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     IopMcTryUnlockMdl @ 0x14059F778 (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x14070584C (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x14070A3D0 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x14070DAD8 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
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
