/*
 * XREFs of NvmeAdapterBuildFabricsNVMeBusRelations @ 0x1400CCDA4
 * Callers:
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400D59E8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeAdapterBuildFabricsNVMeBusRelations(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  int v6; // edi
  unsigned int v7; // r15d
  KSPIN_LOCK **v8; // rax
  KSPIN_LOCK *v9; // rbx
  _DWORD *Pool; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rbx
  int v14; // r13d
  _QWORD *v15; // rdi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+38h] [rbp-60h] BYREF
  int v21; // [rsp+B0h] [rbp+18h]

  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 592);
  v21 = 0;
  v5 = a2;
  memset(&v18, 0, sizeof(v18));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &v18);
  v8 = (KSPIN_LOCK **)(*(_QWORD *)(v2 + 592) + 136LL);
  v9 = *v8;
  while ( v9 != (KSPIN_LOCK *)v8 )
  {
    KeAcquireInStackQueuedSpinLock(v9 + 69, &LockHandle);
    v7 += *((_DWORD *)v9 + 144);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v9 = (KSPIN_LOCK *)*v9;
    v8 = (KSPIN_LOCK **)(*(_QWORD *)(v2 + 592) + 136LL);
  }
  Pool = (_DWORD *)RaidAllocatePool(64LL, 8 * v7 + 16, 1380213074LL, *(_QWORD *)(v2 + 8));
  if ( Pool )
  {
    if ( v7 )
    {
      v11 = (_QWORD *)(*(_QWORD *)(v2 + 592) + 136LL);
      v12 = (_QWORD *)*v11;
      if ( (_QWORD *)*v11 != v11 )
      {
        do
        {
          KeAcquireInStackQueuedSpinLock(v12 + 69, &LockHandle);
          v13 = (_QWORD *)v12[70];
          if ( v13 != v12 + 70 )
          {
            v14 = v21;
            do
            {
              v15 = v13 + 11;
              if ( v3 < v7 && (*(_BYTE *)v15 & 2) != 0 )
              {
                *(_QWORD *)&Pool[2 * v3 + 2] = *(v13 - 2);
                ObfReferenceObject((PVOID)*(v13 - 2));
                *v15 |= 1uLL;
                ++v3;
                ++v14;
              }
              else
              {
                *v15 &= ~1uLL;
              }
              v13 = (_QWORD *)*v13;
            }
            while ( v13 != v12 + 70 );
            v21 = v14;
            v2 = a1;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v12 = (_QWORD *)*v12;
        }
        while ( v12 != (_QWORD *)(*(_QWORD *)(v2 + 592) + 136LL) );
        v6 = v21;
        v3 = 0;
      }
      v5 = a2;
    }
    *Pool = v6;
  }
  else
  {
    v3 = -1073741801;
  }
  KeReleaseInStackQueuedSpinLock(&v18);
  result = v3;
  *v5 = Pool;
  return result;
}
