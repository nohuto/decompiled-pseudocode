/*
 * XREFs of HalInitializeOnResume @ 0x1404F4670
 * Callers:
 *     PopHiberCheckResume @ 0x140B56660 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x14054A304 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
