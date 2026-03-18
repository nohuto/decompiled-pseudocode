/*
 * XREFs of CcDecrementVolumeUseCountWithDelete @ 0x1403A53D0
 * Callers:
 *     CcScanLogHandleList @ 0x1403A4C00 (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcGetDeviceGuidAsync @ 0x14057A2A0 (CcGetDeviceGuidAsync.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057A3A4 (CcQueueAsyncGetDeviceGuid.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     KiRcuStartGracePeriod @ 0x1405B80A4 (KiRcuStartGracePeriod.c)
 */

int __fastcall CcDecrementVolumeUseCountWithDelete(__int64 a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  int v6; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  _m_prefetchw((const void *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 8);
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v2 - 1, v2);
    if ( v3 == v2 )
      return v2;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  if ( *(_QWORD *)(a1 + 32) )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *(_QWORD *)(a1 + 32) )
    {
      v4 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v4 + 8) != a1 + 24 || (v5 = *(_QWORD **)(a1 + 32), *v5 != a1 + 24) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v6 = *(_DWORD *)(a1 + 212);
  *(_OWORD *)(a1 + 2712) = 0LL;
  *(_OWORD *)(a1 + 2728) = 0LL;
  *(_OWORD *)(a1 + 2744) = 0LL;
  *(_QWORD *)(a1 + 2752) = 0LL;
  *(_QWORD *)(a1 + 2736) = CcDeleteVolumeCacheMap;
  *(_QWORD *)(a1 + 2744) = a1;
  KiRcuStartGracePeriod();
  LODWORD(v2) = DbgPrintEx(
                  0x7Fu,
                  3u,
                  "[%04x:%04x]CcDecrementVolumeUseCountWithDelete: VCM:%p(vid:%2lx) Freed!\n",
                  LODWORD(KeGetCurrentThread()[1].CycleTime),
                  KeGetCurrentThread()[1].CurrentRunTime,
                  (const void *)a1,
                  v6);
  return v2;
}
