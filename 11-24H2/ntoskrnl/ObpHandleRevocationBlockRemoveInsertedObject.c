/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x1409C2778
 * Callers:
 *     ObRevokeHandles @ 0x140741E88 (ObRevokeHandles.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rsi
  char *v10; // rax
  char *v11; // rbx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  signed __int64 Count; // rax
  signed __int64 v15; // rdx
  unsigned __int64 v16; // rtt

  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Count = &a2[2].Count;
      --CurrentThread->KernelApcDisable;
      v10 = (char *)KeAbPreAcquire((__int64)&a2[2], 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Count, v10, (__int64)p_Count);
      if ( v11 )
        v11[10] = 1;
    }
    v12 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v13 = (__int64 **)a1[1], *v13 != a1) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = (__int64)v13;
    if ( !a4 )
    {
      _m_prefetchw(&a2[2]);
      Count = a2[2].Count;
      v15 = Count - 16;
      if ( (Count & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v15 = 0LL;
      if ( (Count & 2) != 0
        || (v16 = a2[2].Count, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[2], v15, Count)) )
      {
        ExfReleasePushLock(&a2[2].Count);
      }
      KeAbPostRelease((ULONG_PTR)&a2[2]);
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection_0(a2 + 3);
    a1[2] = a3;
  }
}
