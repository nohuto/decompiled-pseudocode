/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x14027118C
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     NtFlushProcessWriteBuffers @ 0x140271170 (NtFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407647D4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140764ED0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspTerminateAllThreads @ 0x1408BDBA4 (PspTerminateAllThreads.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A152C0 (PsQueryTotalCycleTimeProcess.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140271300 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x140271370 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(__int64 a1)
{
  char v1; // bl
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // r14d
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rdi
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
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
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  p_StaticAffinity = &CurrentPrcb->StaticAffinity;
  if ( v1 )
  {
    v11 = KeNumberProcessors_0 - 1;
    v5 = 1;
    LODWORD(p_StaticAffinity) = 0;
  }
  else
  {
    ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&p_StaticAffinity->KeFlushTbAffinity.Count = 2097153;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    v8 = *((_DWORD *)KiGlobalState + CurrentPrcb->Number) >> 6;
    if ( p_StaticAffinity->KeFlushTbAffinity.Count > (unsigned int)v8 )
    {
      v9 = (unsigned int)v8;
      v10 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v8];
      _bittestandreset64((__int64 *)&v10, *((_DWORD *)KiGlobalState + CurrentPrcb->Number) & 0x3F);
      p_StaticAffinity->KeFlushTbAffinity.Bitmap[v9] = v10;
    }
    v11 = KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity);
  }
  if ( v11 )
  {
    v15 = 0LL;
    v16 = xHalTimerWatchdogStop;
    v14 = 0LL;
    KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), v5, (_DWORD)p_StaticAffinity, (unsigned int)&v14, 5LL);
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
