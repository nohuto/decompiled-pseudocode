/*
 * XREFs of ProcLibTracePccCapChange @ 0x140004B98
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x140024F58 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002DE0 (ProcLibTraceProcessorSpecificEvent.c)
 */

char __fastcall ProcLibTracePccCapChange(int a1, int a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(
           a1,
           (int)&PPM_ETW_PCC_CAP_CHANGE,
           (int)&PPM_ETW_PCC_CAP_CHANGE_HV,
           4,
           (__int64)&v3);
}
