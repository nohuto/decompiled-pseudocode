/*
 * XREFs of MmSetPageProtection @ 0x1404D6CF0
 * Callers:
 *     sub_140519160 @ 0x140519160 (sub_140519160.c)
 *     KiAllocateProcessorStacks @ 0x1405B5D00 (KiAllocateProcessorStacks.c)
 *     KiFreeProcessorStacks @ 0x1405B6F14 (KiFreeProcessorStacks.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpProtectBinPartial @ 0x140A378BC (HvpProtectBinPartial.c)
 *     KeWriteProtectProcessorState @ 0x140B56770 (KeWriteProtectProcessorState.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     VslpIumPhase0Initialize @ 0x140C19E78 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
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
