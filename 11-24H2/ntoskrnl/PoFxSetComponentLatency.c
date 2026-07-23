/*
 * XREFs of PoFxSetComponentLatency @ 0x1402BF520
 * Callers:
 *     DifPoFxSetComponentLatencyWrapper @ 0x140636110 (DifPoFxSetComponentLatencyWrapper.c)
 * Callees:
 *     PopPepComponentSetLatency @ 0x1402BF568 (PopPepComponentSetLatency.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402BF72C (PopDiagTraceFxComponentLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
