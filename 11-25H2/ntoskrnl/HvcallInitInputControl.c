/*
 * XREFs of HvcallInitInputControl @ 0x14045BBA0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x140703120 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140703254 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x140703380 (HvlGetMicrocodeLatency.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140703488 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
