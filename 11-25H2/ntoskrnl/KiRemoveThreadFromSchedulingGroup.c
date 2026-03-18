/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1403A9BE8 (KiSetThreadSchedulingGroup.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveThreadFromScbQueue @ 0x140352968 (KiRemoveThreadFromScbQueue.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1403A9D6C (KiUpdateThreadSchedulingProperties.c)
 */

void __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  char v2; // r14
  int v3; // edi
  struct _KPRCB *v4; // rdi
  unsigned __int64 v5; // rcx
  char v6; // si
  unsigned __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v9; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v11; // edi
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+30h] BYREF
  struct _KPRCB *v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  volatile __int64 *v18; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  v18 = 0LL;
  v15 = 0;
  v17 = 0LL;
  v14 = 0LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    v9 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v9->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    _enable();
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v16 = CurrentPrcb;
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, (unsigned __int64 *)&v17);
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    KiUpdateThreadSchedulingProperties(a1);
    KiReleaseThreadStateLock(v7, (__int64)CurrentPrcb, &v17, 0LL, (volatile signed __int64 **)&v14);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiAcquireThreadStateLockForWrite(a1, (__int64 *)&v16, &v17, &v18, (volatile signed __int64 **)&v14);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue(v16, *(_QWORD *)(a1 + 944), a1, *(_BYTE *)(a1 + 195));
      v2 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v4 = v16;
    KiUpdateThreadSchedulingProperties(a1);
    if ( v2 )
    {
      KiAddThreadToPrcbQueue((__int64)v4, a1, (unsigned int)*(char *)(a1 + 195), 0LL, 0, &v15);
      v6 = v15;
    }
    else
    {
      v6 = 3;
      v15 = 3;
    }
    KiReleaseThreadStateLock(v5, (__int64)v4, &v17, v18, (volatile signed __int64 **)&v14);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v2 && (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
      EtwTraceReadyQueueInsertion(a1, v4->Number, v6, 0LL);
  }
}
