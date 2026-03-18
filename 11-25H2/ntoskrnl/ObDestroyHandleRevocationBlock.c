/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x140A62690
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  struct _EX_RUNDOWN_REF *Count; // r14
  signed __int64 v7; // rax
  signed __int64 v8; // rdx
  unsigned __int64 v9; // rtt
  struct _EX_RUNDOWN_REF *v10; // rsi
  unsigned __int64 v11; // rcx
  struct _EX_RUNDOWN_REF **v12; // rax

  CurrentThread = KeGetCurrentThread();
  p_Count = &a1[2].Count;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&a1[2], 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (__int64)p_Count);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  Count = (struct _EX_RUNDOWN_REF *)a1->Count;
  while ( Count != a1 )
  {
    v10 = Count;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    if ( a1 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)&v10[2],
                                           2LL,
                                           (signed __int64)a1) )
    {
      v11 = v10->Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v10->Count + 8) != v10
        || (v12 = (struct _EX_RUNDOWN_REF **)v10[1].Count, *v12 != v10) )
      {
        __fastfail(3u);
      }
      *v12 = (struct _EX_RUNDOWN_REF *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      ExReleaseRundownProtection_0(a1 + 3);
      v10[2].Count = 0LL;
    }
  }
  _m_prefetchw(p_Count);
  v7 = *p_Count;
  v8 = *p_Count - 16;
  if ( (*p_Count & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (v7 & 2) != 0 || (v9 = *p_Count, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)p_Count, v8, v7)) )
    ExfReleasePushLock(p_Count);
  KeAbPostRelease((ULONG_PTR)p_Count);
  KeLeaveCriticalRegion();
  ExWaitForRundownProtectionRelease(a1 + 3);
}
