/*
 * XREFs of ProcLibTracePccCapChange @ 0x140003A10
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x140047164 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140003A48 (ProcLibTraceProcessorSpecificEvent.c)
 */

__int64 __fastcall ProcLibTracePccCapChange(__int64 a1, int a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_CAP_CHANGE, &PPM_ETW_PCC_CAP_CHANGE_HV, 4LL, &v3);
}
