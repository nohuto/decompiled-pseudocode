/*
 * XREFs of PopIsPlatformAoAcCapableInitialized @ 0x14048BD24
 * Callers:
 *     PopPdcRegister @ 0x140AAE3F4 (PopPdcRegister.c)
 * Callees:
 *     <none>
 */

bool PopIsPlatformAoAcCapableInitialized()
{
  return PopPlatformAoAcCapabilityInitialized != 0;
}
