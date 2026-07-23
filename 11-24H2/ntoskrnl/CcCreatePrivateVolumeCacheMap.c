/*
 * XREFs of CcCreatePrivateVolumeCacheMap @ 0x14042FE00
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcAddExternalCacheToVolumeEx @ 0x1405775CC (CcAddExternalCacheToVolumeEx.c)
 *     CcRegisterExternalCache @ 0x140577D30 (CcRegisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x1402639F8 (CcDecrementPrivateVolumeUseCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFindPrivateVolumeCacheMap @ 0x14042FF54 (CcFindPrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1404300DC (CcInitializePrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x140430768 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcCreatePrivateVolumeCacheMap(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 PrivateVolumeCacheMap; // rax
  PVOID v8; // r14
  PVOID v9; // rax
  void *v10; // rbx
  void *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+88h] [rbp+38h] BYREF
  PVOID PoolWithTag; // [rsp+98h] [rbp+48h] BYREF

  v12 = 0LL;
  v14 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    PrivateVolumeCacheMap = CcFindPrivateVolumeCacheMap(a1, *(_QWORD *)(*(_QWORD *)(a2 + 512) + 16LL));
    if ( PrivateVolumeCacheMap )
    {
      *(_QWORD *)(a2 + 600) = PrivateVolumeCacheMap;
      return 0LL;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 400LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x680uLL, 0x6D566343u);
    v10 = v9;
    if ( v9 )
    {
      if ( (unsigned __int8)CcInitializePrivateVolumeCacheMap(a1, v9, &PoolWithTag, a2) )
      {
        if ( (unsigned __int8)CcInsertPrivateVolumeCacheMap(a1, (_DWORD)v10, (unsigned int)&v12, 0, 0, (__int64)&v14) )
        {
          *a3 = v10;
        }
        else
        {
          *a3 = v12;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
          CcDecrementPrivateVolumeUseCount((__int64)v10);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          CcDeletePrivateVolumeCacheMap(v10);
        }
        return 0LL;
      }
      CcDeletePrivateVolumeCacheMap(v10);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else
    {
      v11 = v8;
    }
    ExFreePoolWithTag(v11, 0x754E6343u);
  }
  return 3221225626LL;
}
