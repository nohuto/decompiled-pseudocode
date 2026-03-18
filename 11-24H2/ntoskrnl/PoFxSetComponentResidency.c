/*
 * XREFs of PoFxSetComponentResidency @ 0x1405D0900
 * Callers:
 *     DifPoFxSetComponentResidencyWrapper @ 0x140637CD0 (DifPoFxSetComponentResidencyWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x1405D4E78 (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x1405DB904 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
