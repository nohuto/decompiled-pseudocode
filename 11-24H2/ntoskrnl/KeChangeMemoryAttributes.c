/*
 * XREFs of KeChangeMemoryAttributes @ 0x1403CA178
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1403AFC10 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1403AFC80 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403CA140 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1404656E8 (KiIpiSendPacket.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
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
  KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
  if ( (unsigned int)KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count) )
  {
    KiIpiSendPacket(0, (_DWORD)CurrentPrcb + 11704, (unsigned int)KiRollbackSlistPops, 0, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v6, (__int64)CurrentPrcb);
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
