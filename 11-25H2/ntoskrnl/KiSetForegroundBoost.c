/*
 * XREFs of KiSetForegroundBoost @ 0x140269714
 * Callers:
 *     KiSetDisableBoostThread @ 0x140269078 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KiInitializeForegroundBoostThread @ 0x14026B4D4 (KiInitializeForegroundBoostThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KiSetForegroundBoost(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 120);
  if ( (v1 & 8) == 0 )
  {
    LOWORD(v1) = *(_WORD *)(a1 + 518) & 0xFFF0;
    *(_WORD *)(a1 + 518) = v1 | PsPrioritySeparation & 0xF;
  }
  return v1;
}
