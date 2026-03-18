/*
 * XREFs of MiUseProcessorHugeMappingAtDpc @ 0x140685FC4
 * Callers:
 *     MiSoloZeroHugeRange @ 0x140685E14 (MiSoloZeroHugeRange.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiUpdateProtectionMask @ 0x14021BFAC (MiUpdateProtectionMask.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
