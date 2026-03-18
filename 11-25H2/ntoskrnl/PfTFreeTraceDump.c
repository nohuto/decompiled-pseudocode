/*
 * XREFs of PfTFreeTraceDump @ 0x1404A8A9C
 * Callers:
 *     PfGetCompletedTrace @ 0x14093A5D4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140A49614 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140A8729C (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(__int64 a1, _DWORD *a2)
{
  if ( a2[7] == 1 )
    PfpRepurposeNameLoggingTrace();
  else
    ExFreePoolWithTag(a2, 0);
}
