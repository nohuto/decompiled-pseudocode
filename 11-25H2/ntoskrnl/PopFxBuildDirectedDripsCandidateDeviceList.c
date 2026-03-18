/*
 * XREFs of PopFxBuildDirectedDripsCandidateDeviceList @ 0x14048DEFC
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140A3B9D4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopFxReferenceDevice @ 0x140281350 (PopFxReferenceDevice.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PopFxBuildDirectedDripsCandidateDeviceList(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  __int64 *v6; // rax
  __int64 *v7; // rdi
  ULONG_PTR i; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  a1[1] = a1;
  *a1 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopFxBlockingDeviceListLock, v3, (__int64)&PopFxBlockingDeviceListLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v7 = v6;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v6, (__int64)&PopFxDeviceListLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 864), 0, 0) & 0x40) != 0 )
    {
      PopFxReferenceDevice(i, 3);
      v9 = (_QWORD *)a1[1];
      v10 = (_QWORD *)(i + 912);
      if ( (_QWORD *)*v9 != a1 )
        __fastfail(3u);
      *v10 = a1;
      *(_QWORD *)(i + 920) = v9;
      *v9 = v10;
      a1[1] = v10;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  return KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
}
