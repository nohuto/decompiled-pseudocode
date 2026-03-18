/*
 * XREFs of ObMakeTemporaryObject @ 0x1409AF2C0
 * Callers:
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDriver @ 0x140707F30 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x1407372B0 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x14081B320 (ObpDirectoryTeardownCallback.c)
 *     NtMakeTemporaryObject @ 0x1409AF230 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     IovpUnloadDriver @ 0x140B72AF8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rsi
  unsigned __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rdx
  unsigned __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  v3 = (unsigned __int64 *)((char *)Object - 32);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)v3, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
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
