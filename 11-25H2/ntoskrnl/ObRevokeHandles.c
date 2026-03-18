/*
 * XREFs of ObRevokeHandles @ 0x140737F38
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1409CF638 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rbx
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)(a1 + 2), 0LL);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *a1;
  while ( v7 != a1 )
  {
    v8 = v7;
    LOBYTE(v5) = 1;
    v7 = (_QWORD *)*v7;
    ObpHandleRevocationBlockRemoveInsertedObject(v8, a1, 1LL, v5);
  }
  _m_prefetchw(v2);
  v9 = *v2;
  v10 = *v2 - 16;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (v9 & 2) != 0 || (v11 = *v2, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v10, v9)) )
    ExfReleasePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
}
