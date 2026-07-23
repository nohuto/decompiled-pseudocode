/*
 * XREFs of KeGenericProcessorCallback @ 0x140277E30
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1402670A0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1402772AC (ExpUpdateTimerConfiguration.c)
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     KeSwapDirectoryTableBase @ 0x14045CCC0 (KeSwapDirectoryTableBase.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x140495940 (KeGenericCallDpc.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405B0FEC (KeUpdateDpcWatchdogConfiguration.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140767660 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     KeSetIntervalProfile @ 0x140ABE5E4 (KeSetIntervalProfile.c)
 * Callees:
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KeSetPriorityBoost @ 0x140326970 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeGenericProcessorCallback(
        __int64 *a1,
        char (__fastcall *a2)(__int64 a1, __int64 a2),
        __int64 a3,
        int a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rsi
  _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v12; // r15d
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v18; // rdx
  __int64 v22; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v23; // [rsp+40h] [rbp-C0h]
  _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-B8h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[33]; // [rsp+78h] [rbp-88h] BYREF

  Affinity = 0LL;
  memset_0(&v26, 0, 0x108uLL);
  v8 = 0LL;
  v23 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    v26 = 2097153LL;
    a1 = &v26;
    memset_0(v27, 0, 0x100uLL);
    v8 = 0LL;
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
  v12 = 0;
  Affinity.Reserved[2] = 0;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v12 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost(CurrentThread, 15LL, v7, 0LL);
    v8 = 0LL;
  }
  v13 = a1[1];
LABEL_9:
  v14 = v23;
  if ( a1 )
    v15 = *(unsigned __int16 *)a1;
  else
    v15 = (unsigned int)v23 + 1;
  while ( 1 )
  {
    if ( v13 )
    {
      _BitScanForward64(&v16, v13);
      Affinity.Group = v14;
      v22 = v13 & ~(1LL << v16);
      Affinity.Mask = 1LL << v16;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      p_PreviousAffinity = 0LL;
      if ( a2 == ExpUpdateTimerConfigurationWorker )
        ExpUpdateTimerConfigurationWorker((__int64)CurrentPrcb, a3);
      else
        guard_dispatch_icall_no_overrides(CurrentPrcb, a3);
      v13 = v22;
      v8 = 0LL;
      goto LABEL_9;
    }
    LOWORD(v14) = v14 + 1;
    v23 = v14;
    if ( (unsigned __int16)v14 >= (unsigned int)v15 )
      break;
    v13 = a1[(unsigned __int16)v14 + 1];
    v14 = (unsigned __int16)v14;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v15);
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v12);
    else
      KiRemoveBoostThread(CurrentPrcb, CurrentThread, v14, v8);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v18) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch(CurrentPrcb, v18);
}
