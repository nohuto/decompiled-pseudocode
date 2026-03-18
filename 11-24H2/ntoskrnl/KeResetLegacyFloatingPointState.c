/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1406AA3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
