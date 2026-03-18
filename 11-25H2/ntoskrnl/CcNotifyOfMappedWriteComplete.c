/*
 * XREFs of CcNotifyOfMappedWriteComplete @ 0x1403A6780
 * Callers:
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     CcReleaseByteRangeFromWrite @ 0x1402D6ED4 (CcReleaseByteRangeFromWrite.c)
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     CcGetPartitionForSectionObject @ 0x1403A6AC0 (CcGetPartitionForSectionObject.c)
 *     CcIsFatalWriteError @ 0x1403BEC88 (CcIsFatalWriteError.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rdi
  char v5; // r15
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 v10; // r14
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+88h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 600);
  v10 = *(_QWORD *)(v4 + 536);
  v11 = (_QWORD *)(v8 + 1104);
  if ( !CcEnablePerVolumeLazyWriter )
    v11 = (_QWORD *)(v10 + 1168);
  if ( v10 != CcGetPartitionForSectionObject(a1) )
    KeBugCheckEx(0x34u, 0x14BCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a4 < 0 )
    v5 = (unsigned __int8)CcIsFatalWriteError(v4) == 0;
  v12 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v12 )
  {
    if ( a2 > v12 )
      goto LABEL_9;
    LODWORD(v6) = *(_DWORD *)(v4 + 48) - a2;
  }
  if ( (_DWORD)v6 )
    CcReleaseByteRangeFromWrite(v4, &v14, v6, 0LL, v5);
LABEL_9:
  if ( (_QWORD *)*v11 != v11 )
    CcPostDeferredWrites(v10, v8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 768), &LockHandle);
  --*(_DWORD *)(v4 + 524);
  CcDecrementOpenCount(v4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
