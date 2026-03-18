/*
 * XREFs of MiShutdownSystem @ 0x140B52044
 * Callers:
 *     MmShutdownSystem @ 0x140B52490 (MmShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     CcNotifyWriteBehind @ 0x140577140 (CcNotifyWriteBehind.c)
 *     MiDeleteHardwareAccelerators @ 0x14068566C (MiDeleteHardwareAccelerators.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiDeletePagingFiles @ 0x1407DF204 (MiDeletePagingFiles.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x140A99C18 (MiFreeLoadedImportList.c)
 *     MiZeroAllPageFiles @ 0x140B5223C (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B5339C (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  bool v4; // zf
  __int64 Lock; // rax
  PVOID *v6; // rbx
  struct _KTHREAD *v7; // r14
  _QWORD *v8; // rdi
  ULONG_PTR v9; // rbp
  void *Pool; // rax
  void *v11; // rsi
  PVOID v12; // rcx

  if ( !dword_140E2FE04 )
  {
    MiDeleteHardwareAccelerators(0LL, 1);
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages(0);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v1 = KeAbPreAcquire((__int64)qword_140E38E00, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E38E00, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(qword_140E38E00, v1, (__int64)qword_140E38E00);
    if ( v3 )
      *((_BYTE *)v3 + 10) = 1;
    dword_140E2FE04 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E38E00, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_140E38E00);
    KeAbPostRelease((ULONG_PTR)qword_140E38E00);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeSetEvent(&stru_140E38A18, 0, 0);
    if ( byte_140E2FE02 )
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
    v6 = (PVOID *)PsLoadedModuleList;
    v7 = (struct _KTHREAD *)Lock;
    while ( v6 != &PsLoadedModuleList )
    {
      v8 = v6[17];
      if ( v8 != (_QWORD *)1 && v8 != (_QWORD *)-2LL && ((unsigned __int8)v8 & 1) == 0 )
      {
        v9 = 8LL * *v8 + 8;
        Pool = (void *)MiAllocatePool(0x40uLL, v9, 1413770573);
        v11 = Pool;
        if ( !Pool )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(Pool, v8, v9);
        MiFreeLoadedImportList(v8);
        v6[17] = v11;
      }
      v12 = v6[10];
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        v6[10] = 0LL;
      }
      v6 = (PVOID *)*v6;
    }
    MmReleaseLoadLock(v7);
    MiDeletePagingFiles((__int64)&MiSystemPartition);
  }
  return 1;
}
