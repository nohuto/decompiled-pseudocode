/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1406AA3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
