/*
 * XREFs of HalpGetDisplayBiosInformation @ 0x14053C0B0
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetDisplayBiosInformation()
{
  return 2 - (unsigned int)(HalpVideoBiosPresent != 0);
}
