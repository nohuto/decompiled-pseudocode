/*
 * XREFs of GreReinitializeStockFonts @ 0x1C00C27B0
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreReinitializeStockFonts(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = a1;
  if ( qword_1C0294770 && (int)qword_1C0294770() >= 0 && qword_1C0294778 )
    qword_1C0294778(v3);
  result = SGDGetSessionState(a1);
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)(result + 24) + 1284LL) = 1;
  return result;
}
