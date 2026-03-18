/*
 * XREFs of MiShutdownSystem @ 0x140B62174
 * Callers:
 *     MmShutdownSystem @ 0x140B625C0 (MmShutdownSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     CcNotifyWriteBehind @ 0x14057A440 (CcNotifyWriteBehind.c)
 *     MiDeleteHardwareAccelerators @ 0x140690ACC (MiDeleteHardwareAccelerators.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiDeletePagingFiles @ 0x1407EF0A4 (MiDeletePagingFiles.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x140A9ED10 (MiFreeLoadedImportList.c)
 *     MiZeroAllPageFiles @ 0x140B6236C (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  struct _KTHREAD *Lock; // rax
  PVOID *v8; // rbx
  struct _KTHREAD *v9; // r14
  _QWORD *v10; // rdi
  ULONG_PTR v11; // rbp
  void *Pool; // rax
  void *v13; // rsi
  PVOID v14; // rcx

  if ( !dword_140E30044 )
  {
    MiDeleteHardwareAccelerators(0LL, 1);
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages(0);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v1 = KeAbPreAcquire((__int64)qword_140E39040, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E39040, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(qword_140E39040, (__int64)v1, (__int64)qword_140E39040);
    if ( v3 )
      *((_BYTE *)v3 + 10) = 1;
    dword_140E30044 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E39040, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_140E39040);
    KeAbPostRelease((ULONG_PTR)qword_140E39040);
    v6 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v6 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v5, v4);
    KeSetEvent(&stru_140E38C58, 0, 0);
    if ( byte_140E30042 )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
    MiDeleteAllHardwareEnclaves();
  }
  if ( PopShutdownCleanly )
  {
    Lock = MmAcquireLoadLock();
    v8 = (PVOID *)PsLoadedModuleList;
    v9 = Lock;
    while ( v8 != &PsLoadedModuleList )
    {
      v10 = v8[17];
      if ( v10 != (_QWORD *)1 && v10 != (_QWORD *)-2LL && ((unsigned __int8)v10 & 1) == 0 )
      {
        v11 = 8LL * *v10 + 8;
        Pool = (void *)MiAllocatePool(0x40uLL, v11, 1413770573);
        v13 = Pool;
        if ( !Pool )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(Pool, v10, v11);
        MiFreeLoadedImportList(v10);
        v8[17] = v13;
      }
      v14 = v8[10];
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0);
        v8[10] = 0LL;
      }
      v8 = (PVOID *)*v8;
    }
    MmReleaseLoadLock(v9);
    MiDeletePagingFiles((__int64)&MiSystemPartition);
  }
  return 1;
}
