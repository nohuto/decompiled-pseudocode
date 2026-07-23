/*
 * XREFs of KeWakeProcessor @ 0x1405BA300
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1406B08E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406B0C50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B1330 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B16A0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1406B76C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1406BB9C0 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
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
