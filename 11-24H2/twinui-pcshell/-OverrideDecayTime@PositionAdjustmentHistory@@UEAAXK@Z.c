/*
 * XREFs of ?OverrideDecayTime@PositionAdjustmentHistory@@UEAAXK@Z @ 0x180524AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PositionAdjustmentHistory::OverrideDecayTime(PositionAdjustmentHistory *this, int a2)
{
  *((_DWORD *)this + 12) = a2;
}
