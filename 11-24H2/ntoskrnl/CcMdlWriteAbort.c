/*
 * XREFs of CcMdlWriteAbort @ 0x14057C350
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  CSHORT MdlFlags; // di
  PMDL v3; // rbx
  __int16 v4; // di
  _QWORD *SharedCacheMap; // rbp
  struct _MDL *Next; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  MdlFlags = MdlChain->MdlFlags;
  v3 = MdlChain;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = MdlFlags & 2;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  do
  {
    Next = v3->Next;
    if ( v4 )
      MmUnlockPages(v3);
    IoFreeMdl(v3);
    v3 = Next;
  }
  while ( Next );
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(SharedCacheMap[67] + 768LL), &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
