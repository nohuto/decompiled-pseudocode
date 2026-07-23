/*
 * XREFs of CcUpdateReadHistory @ 0x140457680
 * Callers:
 *     CcAsyncReadPrefetch @ 0x140457450 (CcAsyncReadPrefetch.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     CcMdlRead @ 0x140ABE630 (CcMdlRead.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcUpdateReadHistory(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  _InterlockedExchange64((volatile __int64 *)(v3 + 16), *(_QWORD *)(v3 + 32));
  _InterlockedExchange64((volatile __int64 *)(v3 + 24), *(_QWORD *)(v3 + 40));
  _InterlockedExchange64((volatile __int64 *)(v3 + 32), *a2);
  _InterlockedExchange64((volatile __int64 *)(v3 + 40), *a2 + a3);
  if ( (*(_DWORD *)(v4 + 152) & 0x200000) != 0
    && (unsigned int)((*(_DWORD *)(v3 + 32) >> 12) - (*(_DWORD *)(v3 + 24) >> 12)) > 1 )
  {
    v5 = (KSPIN_LOCK *)(*(_QWORD *)(v4 + 536) + 768LL);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    *(_DWORD *)(v4 + 152) &= ~0x200000u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
