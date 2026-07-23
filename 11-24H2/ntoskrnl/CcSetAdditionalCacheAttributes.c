/*
 * XREFs of CcSetAdditionalCacheAttributes @ 0x1404D82A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall CcSetAdditionalCacheAttributes(
        PFILE_OBJECT FileObject,
        BOOLEAN DisableReadAhead,
        BOOLEAN DisableWriteBehind)
{
  _DWORD *SharedCacheMap; // rbx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0x5FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 67) + 768LL), &LockHandle);
  v6 = SharedCacheMap[38];
  v7 = v6 | 1;
  v8 = v6 & 0xFFFFFFFE;
  if ( !DisableReadAhead )
    v7 = v8;
  v9 = v7;
  v10 = v7 | 0x202;
  v11 = v9 & 0xFFFFFFFD;
  if ( !DisableWriteBehind )
    v10 = v11;
  SharedCacheMap[38] = v10;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
