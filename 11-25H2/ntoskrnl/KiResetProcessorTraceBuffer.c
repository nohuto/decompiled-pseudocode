/*
 * XREFs of KiResetProcessorTraceBuffer @ 0x1405AD7D0
 * Callers:
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 KiResetProcessorTraceBuffer()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v1; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v1 = __readmsr(0x570u);
  if ( (v1 & 1) != 0 )
  {
    __writemsr(0x570u, v1 & 0xFFFFFFFFFFFFFFFEuLL);
    __writemsr(0x561u, 0LL);
    __writemsr(0x571u, 0LL);
    __writemsr(0x570u, v1);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
