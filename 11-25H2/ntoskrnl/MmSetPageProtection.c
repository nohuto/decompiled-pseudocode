/*
 * XREFs of MmSetPageProtection @ 0x1404F43C0
 * Callers:
 *     sub_1405169E0 @ 0x1405169E0 (sub_1405169E0.c)
 *     KiAllocateProcessorStacks @ 0x1405B1E34 (KiAllocateProcessorStacks.c)
 *     KiFreeProcessorStacks @ 0x1405B3044 (KiFreeProcessorStacks.c)
 *     HvpProtectBinPartial @ 0x140882DC4 (HvpProtectBinPartial.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     KeWriteProtectProcessorState @ 0x140B467CC (KeWriteProtectProcessorState.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     VslpIumPhase0Initialize @ 0x140C08DD8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
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
