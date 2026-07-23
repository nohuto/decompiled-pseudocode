/*
 * XREFs of PopFxInsertAcpiDevice @ 0x1405CEB88
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x1405D9554 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v5, (__int64)&PopFxDeviceListLock);
  if ( v7 )
    v7[10] = 1;
  v8 = (_QWORD *)qword_140F0D918;
  v9 = (_QWORD *)(a3 + 200);
  if ( *(__int64 **)qword_140F0D918 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  *v9 = &PopFxAcpiDeviceList;
  *(_QWORD *)(a3 + 208) = v8;
  *v8 = v9;
  qword_140F0D918 = a3 + 200;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
