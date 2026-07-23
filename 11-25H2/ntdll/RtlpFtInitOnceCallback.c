/*
 * XREFs of RtlpFtInitOnceCallback @ 0x1801474B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtInitialize @ 0x1801474CC (RtlpFtInitialize.c)
 */

_BOOL8 __fastcall RtlpFtInitOnceCallback(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  return (int)RtlpFtInitialize(a1, a2, a3) >= 0;
}
