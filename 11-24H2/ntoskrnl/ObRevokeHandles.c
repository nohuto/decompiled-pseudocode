/*
 * XREFs of ObRevokeHandles @ 0x140743F58
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1409D2948 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rdi
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
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v4, (__int64)v2);
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
