/*
 * XREFs of PoFxSetComponentLatency @ 0x140316970
 * Callers:
 *     DifPoFxSetComponentLatencyWrapper @ 0x140637B50 (DifPoFxSetComponentLatencyWrapper.c)
 * Callees:
 *     PopPepComponentSetLatency @ 0x1403169B8 (PopPepComponentSetLatency.c)
 *     PopDiagTraceFxComponentLatency @ 0x140316B7C (PopDiagTraceFxComponentLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
