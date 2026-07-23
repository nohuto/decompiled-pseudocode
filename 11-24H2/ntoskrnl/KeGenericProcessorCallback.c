/*
 * XREFs of KeGenericProcessorCallback @ 0x140318580
 * Callers:
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14041131C (ExpUpdateTimerConfiguration.c)
 *     KeSwapDirectoryTableBase @ 0x140450D1C (KeSwapDirectoryTableBase.c)
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x14048F660 (KeGenericCallDpc.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405B191C (KeUpdateDpcWatchdogConfiguration.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x140777250 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     RtlUpdateSwapReference @ 0x140A2B6A0 (RtlUpdateSwapReference.c)
 *     KeSetIntervalProfile @ 0x140ABD6BC (KeSetIntervalProfile.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KeSetPriorityBoost @ 0x1402DFC90 (KeSetPriorityBoost.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KeGenericProcessorCallback(
        __int64 *a1,
        char (__fastcall *a2)(__int64 a1, __int64 a2),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v10; // r15d
  unsigned __int64 v11; // rdx
  unsigned __int16 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v16; // rdx
  __int64 v20; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v21; // [rsp+40h] [rbp-C0h]
  _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-B8h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v25[33]; // [rsp+78h] [rbp-88h] BYREF

  Affinity = 0LL;
  memset_0(&v24, 0, 0x108uLL);
  v21 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    v24 = 2097153LL;
    a1 = &v24;
    memset_0(v25, 0, 0x100uLL);
    if ( (_WORD)v24 )
    {
LABEL_3:
      v25[0] |= 1uLL;
      goto LABEL_4;
    }
    if ( WORD1(v24) )
    {
      LOWORD(v24) = 1;
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
  v12 = v21;
  if ( a1 )
    v13 = *(unsigned __int16 *)a1;
  else
    v13 = (unsigned int)v21 + 1;
  while ( 1 )
  {
    if ( v11 )
    {
      _BitScanForward64(&v14, v11);
      Affinity.Group = v12;
      v20 = v11 & ~(1LL << v14);
      Affinity.Mask = 1LL << v14;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      p_PreviousAffinity = 0LL;
      if ( a2 == ExpUpdateTimerConfigurationWorker )
        ExpUpdateTimerConfigurationWorker((__int64)CurrentPrcb, a3);
      else
        guard_dispatch_icall_no_overrides(CurrentPrcb, a3);
      v11 = v20;
      goto LABEL_8;
    }
    v21 = ++v12;
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
  LOBYTE(v16) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch(CurrentPrcb, v16);
}
