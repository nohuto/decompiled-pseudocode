/*
 * XREFs of HalInitializeOnResume @ 0x1404F71E0
 * Callers:
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x14054CBF4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
