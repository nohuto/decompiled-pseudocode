/*
 * XREFs of MiReleaseProcessorHugeMappingAtDpc @ 0x140686EEC
 * Callers:
 *     MiSoloZeroHugeRange @ 0x140686F44 (MiSoloZeroHugeRange.c)
 * Callees:
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiReleaseProcessorHugeMappingAtDpc(unsigned __int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 result; // rax

  v3 = a3;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  result = MiWriteLargePte(a1, a2, 0, 0);
  *MmInternal = 0LL;
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  __writecr8(v3);
  return result;
}
