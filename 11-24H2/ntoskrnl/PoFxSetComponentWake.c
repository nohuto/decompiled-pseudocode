/*
 * XREFs of PoFxSetComponentWake @ 0x1405D0950
 * Callers:
 *     DifPoFxSetComponentWakeWrapper @ 0x140637E50 (DifPoFxSetComponentWakeWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentWake @ 0x1405D4F5C (PopDiagTraceFxComponentWake.c)
 *     PopPepComponentSetWakeHint @ 0x1405DBA00 (PopPepComponentSetWakeHint.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  PopDiagTraceFxComponentWake(*(_QWORD *)(a1 + 48));
  LOBYTE(v6) = a3;
  return PopPepComponentSetWakeHint(*(_QWORD *)(a1 + 56), a2, v6);
}
