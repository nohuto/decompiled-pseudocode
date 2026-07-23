/*
 * XREFs of PpmInstallFeedbackCounters @ 0x1403E9C74
 * Callers:
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1403E99A0 (PpmContinueActiveTimeAccumulation.c)
 *     PpmPerfFeedbackCounterRead @ 0x14043DCE0 (PpmPerfFeedbackCounterRead.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rsi
  __int64 v10; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // r8
  bool v13; // r15
  int v14; // edx
  __int64 v15; // r14
  __int64 v16; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v19; // eax
  unsigned __int32 v20; // ett
  int v21; // [rsp+30h] [rbp-58h] BYREF
  _GROUP_AFFINITY v22; // [rsp+38h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v4 = *(unsigned int *)(a1 + 36);
  v21 = 0;
  v22 = 0LL;
  LODWORD(v4) = *((_DWORD *)KiGlobalState + v4);
  *(_QWORD *)&v22.Group = (unsigned __int16)((unsigned int)v4 >> 6);
  v22.Mask = 1LL << (v4 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v22, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7);
  }
  v10 = a1 + 34960;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, v12);
  v13 = KeDisableInterrupts();
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 34960));
  v15 = a1 + 34960 - a2;
  do
  {
    if ( *(_QWORD *)a2 )
    {
      if ( *(_BYTE *)(*(_QWORD *)a2 + 34LL) )
        *(_BYTE *)(v10 + 137) = 1;
      *(_QWORD *)(v15 + a2 + 24) = *(_QWORD *)a2;
      LOBYTE(v14) = 1;
      *(_QWORD *)(v15 + a2 + 64) = 100LL * *(_QWORD *)(v10 + 48);
      PpmPerfFeedbackCounterRead(*(_QWORD *)a2, v14, (unsigned int)&v21, 0, 0LL);
    }
    a2 += 8LL;
    --v9;
  }
  while ( v9 );
  if ( *(_QWORD *)(v10 + 32) )
  {
    *(_BYTE *)(v10 + 136) = 1;
  }
  else if ( *(_QWORD *)(v10 + 24) )
  {
    *(_BYTE *)(v10 + 136) = 0;
  }
  *(_BYTE *)(v10 + 138) = a3;
  KxReleaseSpinLock((volatile signed __int64 *)v10);
  if ( v13 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v19 = *SchedulerAssist;
      do
      {
        v16 = v19;
        LODWORD(v16) = v19 & 0xFFDFFFFF;
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v19 & 0xFFDFFFFF, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
