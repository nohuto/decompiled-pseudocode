/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1406AB340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
