/*
 * XREFs of MiUseProcessorHugeMappingAtDpc @ 0x14067A734
 * Callers:
 *     MiSoloZeroHugeRange @ 0x14067A584 (MiSoloZeroHugeRange.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiUpdateProtectionMask @ 0x140234CAC (MiUpdateProtectionMask.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiUseProcessorHugeMappingAtDpc(__int64 a1, __int64 a2, int a3, unsigned __int8 *a4)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *MmInternal; // rbx
  unsigned __int64 UltraMapping; // rdi
  int updated; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  CurrentPrcb = KeGetCurrentPrcb();
  *a4 = CurrentIrql;
  MmInternal = CurrentPrcb->MmInternal;
  UltraMapping = MiGetUltraMapping((__int64)(MmInternal + 1), 0LL, 0x40000LL, 4);
  *MmInternal = ((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL;
  updated = MiUpdateProtectionMask(0x84000004, a3);
  MiWriteLargePte(UltraMapping, a1, 0, updated);
  return UltraMapping;
}
