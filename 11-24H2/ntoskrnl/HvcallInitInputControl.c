/*
 * XREFs of HvcallInitInputControl @ 0x14045B1D0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14070F000 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070F134 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x14070F260 (HvlGetMicrocodeLatency.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070F368 (HvlpDynamicUpdateMicrocode.c)
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
