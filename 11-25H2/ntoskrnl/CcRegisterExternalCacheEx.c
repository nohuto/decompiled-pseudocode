/*
 * XREFs of CcRegisterExternalCacheEx @ 0x140577690
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcAddExternalCacheToVolumeEx @ 0x140576E3C (CcAddExternalCacheToVolumeEx.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x140A97414 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCacheEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
    return 3221225485LL;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x24CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( CcEnablePerVolumeLazyWriter )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x50uLL, 0x43456343u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = a2;
      v6 = CcAddExternalCacheToVolumeEx((__int64)PoolWithTag);
      if ( v6 < 0 )
      {
        *a3 = 0LL;
        ExFreePoolWithTag(v8, 0x43456343u);
      }
      else
      {
        NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject(*(_QWORD *)(v8[8] + 8LL));
        *(_QWORD *)(v10 + 40) = 0LL;
        *(_QWORD *)(v10 + 16) = NumberOfPhysicalPagesForPartitionObject >> 2;
        *(_QWORD *)(v10 + 8) = NumberOfPhysicalPagesForPartitionObject >> 2;
        *(_QWORD *)v10 = NumberOfPhysicalPagesForPartitionObject >> 2;
        *(_QWORD *)(v10 + 32) = 10 * NumberOfPhysicalPagesForPartitionObject;
        *(_DWORD *)(v10 + 48) = 10;
        *(_DWORD *)(v10 + 24) = (NumberOfPhysicalPagesForPartitionObject >> 3)
                              + (NumberOfPhysicalPagesForPartitionObject >> 4);
        *a3 = v8;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8[8] + 768LL), &LockHandle);
        CcScheduleLazyWriteScan((_BYTE *)v8[8], (_BYTE *)v8[9], 1, 0);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    *a3 = 0LL;
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
