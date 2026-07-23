/*
 * XREFs of PfTFreeTraceDump @ 0x1404A3F48
 * Callers:
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140972BA4 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140A887CC (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(__int64 a1, _DWORD *a2)
{
  if ( a2[7] == 1 )
    PfpRepurposeNameLoggingTrace();
  else
    ExFreePoolWithTag(a2, 0);
}
