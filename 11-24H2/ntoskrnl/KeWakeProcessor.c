/*
 * XREFs of KeWakeProcessor @ 0x1405BCCD0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1406AF940 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406AFCB0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0020 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B0390 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B0700 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1406B67C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1406BAAC0 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E9E90 (KeInterlockedClearProcessorAffinityEx.c)
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v1; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->DeepSleep = 0;
  KeInterlockedClearProcessorAffinityEx((__int64)&KeSleepingProcessors, CurrentPrcb->Number);
  v1 = __readcr4();
  if ( (v1 & 0x20080) != 0 )
  {
    result = v1 ^ 0x80;
    __writecr4(v1 ^ 0x80);
    __writecr4(v1);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
