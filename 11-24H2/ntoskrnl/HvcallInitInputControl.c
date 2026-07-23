/*
 * XREFs of HvcallInitInputControl @ 0x140450570
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14070CB90 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070CCC4 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x14070CDF0 (HvlGetMicrocodeLatency.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070CEF8 (HvlpDynamicUpdateMicrocode.c)
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
