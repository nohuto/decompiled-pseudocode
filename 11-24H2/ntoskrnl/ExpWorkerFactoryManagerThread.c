/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x140659160
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeTimeOutQueueWaiters @ 0x1402F1880 (KeTimeOutQueueWaiters.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14032CFE0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14048E88C (ExpWorkerFactoryDeferredThreadCreation.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rdi
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v4; // r8d
  unsigned int Blink; // eax
  char v6; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PLIST_ENTRY EntryArray; // [rsp+68h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    while ( 1 )
    {
      EntryArray = 0LL;
      KeRemoveQueueEx(&ExpWorkerFactoryManagerQueue, 0, 0, 0LL, &EntryArray, 1u);
      v1 = EntryArray;
      if ( EntryArray != (PLIST_ENTRY)&ExpWorkerFactoryThreadCreationBlock )
        break;
      ExpWorkerFactoryDeferredThreadCreation();
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
    }
    if ( !LODWORD(EntryArray[3].Flink) )
      break;
    v2 = EntryArray - 35;
    Flink = EntryArray[-34].Flink;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
    if ( !LODWORD(v2[25].Flink) )
    {
      v4 = (unsigned int)v2[24].Flink;
      Blink = (unsigned int)v2[23].Blink;
      if ( v4 > Blink )
        KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v2[7].Flink, v4 - Blink);
    }
    if ( BYTE1(Flink[2].Flink) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      KeRegisterObjectNotification((__int64)&v2[26].Blink, (__int64)&ExpWorkerFactoryManagerQueue, (__int64)v1);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 )
LABEL_16:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  v2 = (PLIST_ENTRY)((char *)EntryArray - 616);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)EntryArray[-38].Blink, &LockHandle);
  LODWORD(v2[25].Blink) &= ~0x400u;
  if ( ((__int64)v2[25].Blink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(&v1[-39].Blink) )
    ExpWorkerFactoryCheckCreate((char *)&v1[-39].Blink, &LockHandle, 0);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  goto LABEL_16;
}
