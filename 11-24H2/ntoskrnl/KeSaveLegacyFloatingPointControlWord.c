/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1406AB350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
