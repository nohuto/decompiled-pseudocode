/*
 * XREFs of HalInitializeOnResume @ 0x1404F4AC0
 * Callers:
 *     PopHiberCheckResume @ 0x140B709E0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x14054A4B4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
