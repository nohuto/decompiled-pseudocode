/*
 * XREFs of KeWakeProcessor @ 0x1405B8E30
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1406A4670 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406A49E0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406A4D50 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406A50C0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406A5430 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1406AB4C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1406AF7C0 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E0820 (KeInterlockedClearProcessorAffinityEx.c)
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
