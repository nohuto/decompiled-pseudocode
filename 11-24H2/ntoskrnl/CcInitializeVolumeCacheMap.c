/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x14040BF18
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14057744C (McTemplateK0j_EtwWriteTransfer.c)
 *     CcSetupWatchForRegistryChanges @ 0x140578B80 (CcSetupWatchForRegistryChanges.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057AB54 (CcQueueAsyncGetDeviceGuid.c)
 *     McGenEventRegister_EtwRegister @ 0x14057ABE4 (McGenEventRegister_EtwRegister.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CcGetDeviceGuid @ 0x140A941BC (CcGetDeviceGuid.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r12
  char v5; // r13
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *i; // rax
  __int64 *v13; // rdi
  __int64 *PoolWithTag; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 *j; // rax
  __int64 *v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 )
    v8 = *(_QWORD *)(v3 + 8);
  else
    v8 = *(_QWORD *)(a1 + 8);
  KeRcuReadLock(a1, a2, a3);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v13 = i - 3;
    if ( *(i - 1) == v8 )
    {
      if ( _InterlockedIncrement64(v13 + 1) <= 1 )
        __fastfail(0xEu);
      KeRcuReadUnlock(v10, v9, v11);
      goto LABEL_8;
    }
  }
  KeRcuReadUnlock(v10, v9, v11);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0xAC8uLL, 0x6D566343u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_DWORD *)PoolWithTag = 180880120;
  PoolWithTag[1] = 1LL;
  PoolWithTag[2] = v8;
  v16 = PoolWithTag + 27;
  v16[1] = v16;
  *v16 = v16;
  *((_DWORD *)v13 + 53) = _InterlockedIncrement(&CcNextVolumeId);
  memset_0(v13 + 31, 0, 0x4D0uLL);
  if ( *(_DWORD *)(v8 + 72) != 20 )
  {
    v17 = v13[29] - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    if ( !v17 )
      v17 = v13[30] - *(_QWORD *)CPER_EMPTY_GUID.Data4;
    if ( !v17 )
      CcGetDeviceGuid(a1);
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( j = (__int64 *)CcVolumeCacheMapList; j != &CcVolumeCacheMapList; j = (__int64 *)*j )
  {
    v19 = j - 3;
    if ( *(j - 1) == v8 )
    {
      if ( _InterlockedIncrement64(v19 + 1) <= 1 )
        __fastfail(0xEu);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag(v13, 0x6D566343u);
      *a2 = v19;
      return 0LL;
    }
  }
  v20 = (_QWORD *)qword_140F8E968;
  v13[3] = (__int64)&CcVolumeCacheMapList;
  v13[4] = (__int64)v20;
  *v20 = v13 + 3;
  qword_140F8E968 = (__int64)(v13 + 3);
  _InterlockedAdd64(&qword_140F8E6E8, 1uLL);
  if ( *(_DWORD *)(v13[2] + 72) != 20 )
  {
    v21 = v13[29] - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    if ( !v21 )
      v21 = v13[30] - *(_QWORD *)CPER_EMPTY_GUID.Data4;
    if ( !v21 )
    {
      if ( _InterlockedIncrement64(v13 + 1) <= 1 )
        __fastfail(0xEu);
      v4 = 1;
    }
  }
  if ( !CcRegisterForContainerRestoreDone )
  {
    CcRegisterForContainerRestoreDone = 1;
    v5 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    CcQueueAsyncGetDeviceGuid(v13, a1);
  if ( !CcRegistryWatchInitComplete )
    CcSetupWatchForRegistryChanges(v23, v22, v24);
  if ( !CcEtwLoggingInitialized )
    CcEtwLoggingInitialized = (int)McGenEventRegister_EtwRegister(
                                     MS_KernelCc_Provider,
                                     v22,
                                     &MS_KernelCc_Provider_Context,
                                     &MS_KernelCc_Provider_Context,
                                     LockHandle.LockQueue.Next,
                                     LockHandle.LockQueue.Lock,
                                     *(_QWORD *)&LockHandle.OldIrql) >= 0;
  if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
    McTemplateK0j_EtwWriteTransfer(&MS_KernelCc_Provider_Context, CcEvt_VolumeCacheMap_Init, v24, v13 + 29);
  if ( v5 && !(_BYTE)dword_140FC521C )
  {
    CcContainerRestoreWorkItem.Parameter = 0LL;
    CcContainerRestoreWorkItem.List.Flink = 0LL;
    CcContainerRestoreWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CcRegisterForContainerRestore;
    ExQueueWorkItem(&CcContainerRestoreWorkItem, DelayedWorkQueue);
  }
LABEL_8:
  *a2 = v13;
  return 0LL;
}
