/*
 * XREFs of KeGenericProcessorCallback @ 0x1403390A4
 * Callers:
 *     KeFlushQueuedDpcs @ 0x140204EA0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x140338FA4 (ExpUpdateTimerConfiguration.c)
 *     KeDisableTimer2 @ 0x1403C01A8 (KeDisableTimer2.c)
 *     KeSwapDirectoryTableBase @ 0x14045B984 (KeSwapDirectoryTableBase.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x140494DA0 (KeGenericCallDpc.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405B4998 (KeUpdateDpcWatchdogConfiguration.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140777030 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     RtlUpdateSwapReference @ 0x140A36190 (RtlUpdateSwapReference.c)
 *     KeSetIntervalProfile @ 0x140AC23D4 (KeSetIntervalProfile.c)
 * Callees:
 *     ExpUpdateTimerConfigurationWorker @ 0x14029FDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KeSetPriorityBoost @ 0x140338750 (KeSetPriorityBoost.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall KeGenericProcessorCallback(
        __int64 *a1,
        char (__fastcall *a2)(__int64 a1, __int64 a2),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v10; // r15d
  unsigned __int64 v11; // rdx
  unsigned __int16 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // di
  __int64 v18; // rdx
  __int64 v22; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v23; // [rsp+40h] [rbp-C0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-B8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[33]; // [rsp+78h] [rbp-88h] BYREF

  Affinity = 0LL;
  memset_0(&v26, 0, 0x108uLL);
  v23 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    v26 = 2097153LL;
    a1 = &v26;
    memset_0(v27, 0, 0x100uLL);
    if ( (_WORD)v26 )
    {
LABEL_3:
      v27[0] |= 1uLL;
      goto LABEL_4;
    }
    if ( WORD1(v26) )
    {
      LOWORD(v26) = 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v10 = 0;
  Affinity.Reserved[2] = 0;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v10 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost((__int64)CurrentThread, 15);
  }
  v11 = a1[1];
LABEL_8:
  v12 = v23;
  if ( a1 )
    v13 = *(unsigned __int16 *)a1;
  else
    v13 = (unsigned int)v23 + 1;
  while ( 1 )
  {
    if ( v11 )
    {
      _BitScanForward64(&v14, v11);
      Affinity.Group = v12;
      v22 = v11 & ~(1LL << v14);
      Affinity.Mask = 1LL << v14;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      p_PreviousAffinity = 0LL;
      if ( a2 == ExpUpdateTimerConfigurationWorker )
        ExpUpdateTimerConfigurationWorker((__int64)CurrentPrcb, a3);
      else
        guard_dispatch_icall_no_overrides(CurrentPrcb, a3, v15, v16);
      v11 = v22;
      goto LABEL_8;
    }
    v23 = ++v12;
    if ( v12 >= (unsigned int)v13 )
      break;
    v11 = a1[v12 + 1];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = 2;
    LOBYTE(v13) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v13, v11);
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v10);
    else
      KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentThread);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v18) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch(CurrentPrcb, v18);
}
