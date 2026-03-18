/*
 * XREFs of PfTFreeTraceDump @ 0x1404A9C78
 * Callers:
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140950884 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140A8C29C (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(__int64 a1, _DWORD *a2)
{
  if ( a2[7] == 1 )
    PfpRepurposeNameLoggingTrace();
  else
    ExFreePoolWithTag(a2, 0);
}
