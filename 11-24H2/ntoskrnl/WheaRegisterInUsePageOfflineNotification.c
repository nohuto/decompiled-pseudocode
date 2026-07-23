/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x1407C7B00
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x14070C830 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  signed __int8 v9; // cf
  char *v10; // rsi
  _QWORD *v11; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  Pool2 = ExAllocatePool2(0x40uLL, 0x20uLL, 0x61656857u);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741801;
  *(_QWORD *)(Pool2 + 24) = Context;
  *(_QWORD *)(Pool2 + 16) = Callback;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v8, (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v10 )
    v10[10] = 1;
  v11 = (_QWORD *)qword_140EEEF68;
  if ( *(PVOID **)qword_140EEEF68 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  *v6 = &WheapInUsePageOfflineNotifyList;
  v6[1] = v11;
  *v11 = v6;
  qword_140EEEF68 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0;
}
