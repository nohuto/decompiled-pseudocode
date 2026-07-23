/*
 * XREFs of ObMakeTemporaryObject @ 0x1409B9330
 * Callers:
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDriver @ 0x140711BC0 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x140741200 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x14082B890 (ObpDirectoryTeardownCallback.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x1409B92A0 (NtMakeTemporaryObject.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 *     IovpUnloadDriver @ 0x140B84AF8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rsi
  unsigned __int64 *v3; // rbx
  char *v4; // rax
  char *v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rdx
  unsigned __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  v3 = (unsigned __int64 *)((char *)Object - 32);
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)v3, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v5 )
    v5[10] = 1;
  v2[27] &= ~0x10u;
  _m_prefetchw(v3);
  v6 = *v3;
  v7 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (v6 & 2) != 0 || (v8 = *v3, v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v7, v6)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck((__int64)v2);
}
