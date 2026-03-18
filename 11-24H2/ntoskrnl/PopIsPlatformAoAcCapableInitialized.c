/*
 * XREFs of PopIsPlatformAoAcCapableInitialized @ 0x14048B7C8
 * Callers:
 *     PopPdcRegister @ 0x140ABEFF8 (PopPdcRegister.c)
 * Callees:
 *     <none>
 */

bool PopIsPlatformAoAcCapableInitialized()
{
  return PopPlatformAoAcCapabilityInitialized != 0;
}
