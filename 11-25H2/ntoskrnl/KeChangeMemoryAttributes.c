/*
 * XREFs of KeChangeMemoryAttributes @ 0x14026A684
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140271300 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x140271370 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendPacket @ 0x140466C7C (KiIpiSendPacket.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeChangeMemoryAttributes(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
  CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
  *(_DWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153;
  memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
  KiCopyAffinityEx(
    &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
    ActiveProcessors);
  KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
  if ( (unsigned int)KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity) )
  {
    KiIpiSendPacket(0, (_DWORD)CurrentPrcb + 11704, (unsigned int)KiRollbackSlistPops, 0, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v6, CurrentPrcb);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
