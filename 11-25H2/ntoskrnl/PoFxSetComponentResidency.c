/*
 * XREFs of PoFxSetComponentResidency @ 0x1405CC1B0
 * Callers:
 *     DifPoFxSetComponentResidencyWrapper @ 0x14062BD10 (DifPoFxSetComponentResidencyWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x1405D0518 (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x1405D6724 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
