/*
 * XREFs of PoFxSetComponentLatency @ 0x1402C0EC0
 * Callers:
 *     DifPoFxSetComponentLatencyWrapper @ 0x14062BB90 (DifPoFxSetComponentLatencyWrapper.c)
 * Callees:
 *     PopPepComponentSetLatency @ 0x1402C0F08 (PopPepComponentSetLatency.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402C10CC (PopDiagTraceFxComponentLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
