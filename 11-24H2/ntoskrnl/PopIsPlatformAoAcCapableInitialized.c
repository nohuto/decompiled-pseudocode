/*
 * XREFs of PopIsPlatformAoAcCapableInitialized @ 0x14048659C
 * Callers:
 *     PopPdcRegister @ 0x140ABA068 (PopPdcRegister.c)
 * Callees:
 *     <none>
 */

bool PopIsPlatformAoAcCapableInitialized()
{
  return PopPlatformAoAcCapabilityInitialized != 0;
}
