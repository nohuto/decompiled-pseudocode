/*
 * XREFs of StorPortStallExecutionVrfy @ 0x1401C17A0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortStallExecution @ 0x1400330D0 (StorPortStallExecution.c)
 */

void __fastcall StorPortStallExecutionVrfy(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)BugCheckParameter2 > 0x186A0 )
    KeBugCheckEx(0xF1u, 0x2001uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
  StorPortStallExecution(BugCheckParameter2);
}
