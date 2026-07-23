/*
 * XREFs of MiShutdownSystem @ 0x140B64244
 * Callers:
 *     MmShutdownSystem @ 0x140B64690 (MmShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     CcNotifyWriteBehind @ 0x1405778D0 (CcNotifyWriteBehind.c)
 *     MiDeleteHardwareAccelerators @ 0x140691B9C (MiDeleteHardwareAccelerators.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiDeletePagingFiles @ 0x1407EF674 (MiDeletePagingFiles.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x140A9A0D8 (MiFreeLoadedImportList.c)
 *     MiZeroAllPageFiles @ 0x140B6443C (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B655BC (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  bool v4; // zf
  struct _KTHREAD *Lock; // rax
  PVOID *v6; // rbx
  struct _KTHREAD *v7; // r14
  _QWORD *v8; // rdi
  ULONG_PTR v9; // rbp
  void *Pool; // rax
  void *v11; // rsi
  PVOID v12; // rcx

  if ( !dword_140E30184 )
  {
    MiDeleteHardwareAccelerators(0LL, 1);
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages(0);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v1 = (char *)KeAbPreAcquire((__int64)qword_140E39180, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E39180, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(qword_140E39180, v1, (__int64)qword_140E39180);
    if ( v3 )
      v3[10] = 1;
    dword_140E30184 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E39180, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)qword_140E39180);
    KeAbPostRelease((ULONG_PTR)qword_140E39180);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeSetEvent(&stru_140E38D98, 0, 0);
    if ( byte_140E30182 )
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
    v7 = Lock;
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
