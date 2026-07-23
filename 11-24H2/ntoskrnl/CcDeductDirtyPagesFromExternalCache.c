/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x140496AE0
 * Callers:
 *     CcUnregisterExternalCache @ 0x140578110 (CcUnregisterExternalCache.c)
 *     CcUnregisterExternalCacheEx @ 0x140578150 (CcUnregisterExternalCacheEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcDeductDirtyPagesInternal @ 0x1402E5440 (CcDeductDirtyPagesInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rdi
  __int64 v6; // rsi
  unsigned int v7; // r15d
  unsigned __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  v4 = v2 + 138;
  v6 = *((_QWORD *)PspSystemPartition + 1);
  if ( !CcEnablePerVolumeLazyWriter )
    v4 = (_QWORD *)(v6 + 1168);
  if ( a2 )
  {
    do
    {
      v7 = v3;
      if ( v3 > 0xFFFFFFFF )
        v7 = -1;
      v3 -= v7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 < v7 )
        v7 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v8 - v7;
      CcDeductDirtyPagesInternal(0LL, v7, v6, v2);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    while ( v3 );
  }
  if ( (_QWORD *)*v4 != v4 )
    CcPostDeferredWrites(v6, (__int64)v2);
}
