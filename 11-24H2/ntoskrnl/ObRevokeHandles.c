/*
 * XREFs of ObRevokeHandles @ 0x140741E88
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1409C2778 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rbx
  char *v4; // rax
  __int64 v5; // r9
  char *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2);
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)(a1 + 2), 0LL);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v6 )
    v6[10] = 1;
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
