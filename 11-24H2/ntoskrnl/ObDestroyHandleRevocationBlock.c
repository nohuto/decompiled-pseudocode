/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x140A5D020
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rbx
  char *v4; // rax
  char *v5; // rsi
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
  v4 = (char *)KeAbPreAcquire((__int64)&a1[2], 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (__int64)p_Count);
  if ( v5 )
    v5[10] = 1;
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
