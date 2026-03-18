/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x14069F0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
