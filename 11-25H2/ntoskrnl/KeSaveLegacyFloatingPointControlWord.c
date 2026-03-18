/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14069F0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
