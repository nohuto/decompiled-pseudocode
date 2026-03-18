/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1403AFA9C
 * Callers:
 *     NtFlushProcessWriteBuffers @ 0x1403AFA80 (NtFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14045201C (KeSetPriorityAndQuantumProcess.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407741A4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1407748A0 (PspEnableProcessOptionalXStateFeatures.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     PspTerminateAllThreads @ 0x14094A964 (PspTerminateAllThreads.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A1FFF0 (PsQueryTotalCycleTimeProcess.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1403AFC10 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1403AFC80 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(__int64 a1)
{
  char v1; // bl
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // r14d
  char *p_StaticAffinity; // rdi
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 (__fastcall *v16)(); // [rsp+48h] [rbp-10h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 12LL;
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  p_StaticAffinity = (char *)&CurrentPrcb->StaticAffinity;
  if ( v1 )
  {
    v11 = KeNumberProcessors_0 - 1;
    v5 = 1;
    p_StaticAffinity = 0LL;
  }
  else
  {
    ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)p_StaticAffinity = 2097153;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    v8 = *((_DWORD *)KiGlobalState + CurrentPrcb->Number) >> 6;
    if ( *(unsigned __int16 *)p_StaticAffinity > (unsigned int)v8 )
    {
      v9 = (unsigned int)v8;
      v10 = *(_QWORD *)&p_StaticAffinity[8 * v8 + 8];
      _bittestandreset64(&v10, *((_DWORD *)KiGlobalState + CurrentPrcb->Number) & 0x3F);
      *(_QWORD *)&p_StaticAffinity[8 * v9 + 8] = v10;
    }
    v11 = KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity);
  }
  if ( v11 )
  {
    v15 = 0LL;
    v16 = xHalTimerWatchdogStop;
    v14 = 0LL;
    KiIpiSendRequest((__int64)KeGetCurrentPrcb(), v5, p_StaticAffinity, &v14, 5LL);
    KiIpiStallOnPacketTargetsPrcb(v12, CurrentPrcb);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
