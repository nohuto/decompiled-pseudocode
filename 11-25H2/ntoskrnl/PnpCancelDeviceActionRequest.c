/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x1405A39C0
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

void __fastcall PnpCancelDeviceActionRequest(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rdx
  unsigned __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 88);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 88, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  *(_BYTE *)(a1 + 96) = 1;
  _m_prefetchw(v2);
  v6 = *v2;
  v7 = *v2 - 16;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (v6 & 2) != 0 || (v8 = *v2, v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v7, v6)) )
    ExfReleasePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
}
