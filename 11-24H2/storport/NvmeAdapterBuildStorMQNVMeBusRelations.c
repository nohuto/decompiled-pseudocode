/*
 * XREFs of NvmeAdapterBuildStorMQNVMeBusRelations @ 0x1400CD0D4
 * Callers:
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400D59E8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeAdapterBuildStorMQNVMeBusRelations(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  KSPIN_LOCK **v4; // r15
  KSPIN_LOCK *v5; // rbx
  unsigned int v6; // r12d
  _DWORD *Pool; // r14
  KSPIN_LOCK *v8; // rsi
  unsigned int v9; // ebp
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
  v3 = 0;
  v4 = (KSPIN_LOCK **)(a1 + 1288);
LABEL_2:
  v5 = *v4;
  v6 = 0;
  while ( v5 != (KSPIN_LOCK *)v4 )
  {
    KeAcquireInStackQueuedSpinLock(v5 + 65, &LockHandle);
    v6 += *((_DWORD *)v5 + 136);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = (KSPIN_LOCK *)*v5;
  }
  Pool = (_DWORD *)RaidAllocatePool(64LL, 8LL * v6 + 8, 1380213074LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    v8 = *v4;
    v9 = 0;
LABEL_7:
    if ( v8 != (KSPIN_LOCK *)v4 )
    {
      KeAcquireInStackQueuedSpinLock(v8 + 65, &LockHandle);
      v10 = v8 + 66;
      v11 = (_QWORD *)v8[66];
      while ( 1 )
      {
        if ( v11 == v10 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v8 = (KSPIN_LOCK *)*v8;
          goto LABEL_7;
        }
        if ( (v11[11] & 2) != 0 && *((_DWORD *)v8 + 216) == 2 )
        {
          v11[11] = v11[11] & 0xFFFFFFFFFFFFFFEEuLL | 1;
          if ( v9 >= v6 )
          {
            ExFreePoolWithTag(Pool, 0x52446152u);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            goto LABEL_2;
          }
          ObfReferenceObject((PVOID)*(v11 - 2));
          v12 = v9++;
          *(_QWORD *)&Pool[2 * v12 + 2] = *(v11 - 2);
        }
        else
        {
          v11[11] &= ~1uLL;
        }
        v11 = (_QWORD *)*v11;
        v10 = v8 + 66;
      }
    }
    *Pool = v9;
    *a2 = Pool;
  }
  else
  {
    v3 = -1073741801;
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 1176));
  KeLeaveCriticalRegion();
  return v3;
}
