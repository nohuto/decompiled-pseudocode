/*
 * XREFs of ObCheckActiveHandles @ 0x140A3AAA4
 * Callers:
 *     MiFinishCreateSection @ 0x14093CE8C (MiFinishCreateSection.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

bool __fastcall ObCheckActiveHandles(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rdx
  unsigned __int64 v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 - 32);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 - 32, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *(_QWORD *)(a1 - 40);
  _m_prefetchw(v2);
  v7 = *v2;
  v8 = *v2 - 16;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (v7 & 2) != 0 || (v9 = *v2, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v8, v7)) )
    ExfReleasePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return v6 != 0;
}
