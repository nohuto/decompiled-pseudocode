/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4
 * Callers:
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1402D6FE8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402D6DAC (KiUpdateThreadSchedulingProperties.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402D8F60 (KiRemoveThreadFromScbQueue.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 */

__int64 __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  char v2; // r14
  unsigned int v3; // edi
  int v4; // edx
  char v5; // si
  int v6; // r9d
  struct _KPRCB *v7; // rdi
  int v8; // ecx
  unsigned int v9; // esi
  __int64 result; // rax
  int v11; // edx
  int v12; // r9d
  int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v15; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int v17; // edi
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF
  struct _KPRCB *v22; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF

  v22 = 0LL;
  v24 = 0LL;
  v21 = 0;
  v23 = 0LL;
  v20 = 0LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
    v15 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
    _enable();
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v22 = CurrentPrcb;
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1LL, &v23);
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v11) = 2;
    KiUpdateThreadSchedulingProperties(a1, v11, (_DWORD)CurrentPrcb, v12);
    result = KiReleaseThreadStateLock(v13, (_DWORD)CurrentPrcb, (unsigned int)&v23, 0, (__int64)&v20);
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
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v5 = KiAcquireThreadStateLockForWrite(a1, (unsigned int)&v22, (unsigned int)&v23, (unsigned int)&v24, (__int64)&v20);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue(v22);
      v2 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v7 = v22;
    LOBYTE(v4) = v5;
    KiUpdateThreadSchedulingProperties(a1, v4, (_DWORD)v22, v6);
    if ( v2 )
    {
      KiAddThreadToPrcbQueue((_DWORD)v7, a1, *(char *)(a1 + 195), 0, 0, (__int64)&v21);
      v9 = v21;
    }
    else
    {
      v9 = 3;
      v21 = 3;
    }
    result = KiReleaseThreadStateLock(v8, (_DWORD)v7, (unsigned int)&v23, v24, (__int64)&v20);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v2 && (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
      return EtwTraceReadyQueueInsertion(a1, v7->Number, v9, 0LL);
  }
  return result;
}
