/*
 * XREFs of CcMdlWriteAbort @ 0x140579040
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
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
