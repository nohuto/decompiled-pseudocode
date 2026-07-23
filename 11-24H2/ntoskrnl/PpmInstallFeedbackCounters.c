/*
 * XREFs of PpmInstallFeedbackCounters @ 0x1404C362C
 * Callers:
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14037009C (PpmContinueActiveTimeAccumulation.c)
 *     PpmPerfFeedbackCounterRead @ 0x140432650 (PpmPerfFeedbackCounterRead.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rsi
  __int64 v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // r8
  bool v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v20; // eax
  unsigned __int32 v21; // ett
  int v22; // [rsp+30h] [rbp-58h] BYREF
  _GROUP_AFFINITY v23; // [rsp+38h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v4 = *(unsigned int *)(a1 + 36);
  v22 = 0;
  v23 = 0LL;
  LODWORD(v4) = *((_DWORD *)KiGlobalState + v4);
  *(_QWORD *)&v23.Group = (unsigned __int16)((unsigned int)v4 >> 6);
  v23.Mask = 1LL << (v4 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v23, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, v7);
  }
  v11 = a1 + 34960;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, v13);
  v14 = KeDisableInterrupts();
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 34960));
  v16 = a1 + 34960 - (_QWORD)a2;
  do
  {
    if ( *a2 )
    {
      if ( *(_BYTE *)(*a2 + 34) )
        *(_BYTE *)(v11 + 137) = 1;
      *(__int64 *)((char *)a2 + v16 + 24) = *a2;
      LOBYTE(v15) = 1;
      *(__int64 *)((char *)a2 + v16 + 64) = 100LL * *(_QWORD *)(v11 + 48);
      PpmPerfFeedbackCounterRead(*a2, v15, &v22, 0LL, 0LL);
    }
    ++a2;
    --v10;
  }
  while ( v10 );
  if ( *(_QWORD *)(v11 + 32) )
  {
    *(_BYTE *)(v11 + 136) = 1;
  }
  else if ( *(_QWORD *)(v11 + 24) )
  {
    *(_BYTE *)(v11 + 136) = 0;
  }
  *(_BYTE *)(v11 + 138) = a3;
  KxReleaseSpinLock((volatile signed __int64 *)v11);
  if ( v14 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v20 = *SchedulerAssist;
      do
      {
        v17 = v20;
        LODWORD(v17) = v20 & 0xFFDFFFFF;
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v20 & 0xFFDFFFFF, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v17) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
