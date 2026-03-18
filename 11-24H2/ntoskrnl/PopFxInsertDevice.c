/*
 * XREFs of PopFxInsertDevice @ 0x1404AEE90
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x14074D5D0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall PopFxInsertDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rdi
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, (__int64)v5, (__int64)&PopFxDeviceListLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = (_QWORD *)qword_140F0D758;
  if ( *(ULONG_PTR **)qword_140F0D758 != &PopFxDeviceList )
    __fastfail(3u);
  *a3 = &PopFxDeviceList;
  a3[1] = v8;
  *v8 = a3;
  qword_140F0D758 = (__int64)a3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
