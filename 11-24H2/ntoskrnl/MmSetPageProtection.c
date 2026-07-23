/*
 * XREFs of MmSetPageProtection @ 0x1404D0140
 * Callers:
 *     sub_140516A20 @ 0x140516A20 (sub_140516A20.c)
 *     KiAllocateProcessorStacks @ 0x1405B2FC8 (KiAllocateProcessorStacks.c)
 *     KiFreeProcessorStacks @ 0x1405B41D4 (KiFreeProcessorStacks.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpProtectBinPartial @ 0x140A2C4E4 (HvpProtectBinPartial.c)
 *     KeWriteProtectProcessorState @ 0x140B587C0 (KeWriteProtectProcessorState.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     VslpIumPhase0Initialize @ 0x140C1BEB0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x8000) != 0 )
    return 0;
  MiSetPageProtection(a1, a2, ProtectionMask);
  return 1;
}
