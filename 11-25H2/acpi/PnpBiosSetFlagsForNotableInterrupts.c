/*
 * XREFs of PnpBiosSetFlagsForNotableInterrupts @ 0x14005224C
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140029900 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x140058E20 (ACPIBuildProcessDevicePhasePrs.c)
 * Callees:
 *     PnpBiosScanForWakeInterrupt @ 0x14004F05C (PnpBiosScanForWakeInterrupt.c)
 *     PnpBiosScanForGpioInterrupt @ 0x1400522D4 (PnpBiosScanForGpioInterrupt.c)
 */

__int64 __fastcall PnpBiosSetFlagsForNotableInterrupts(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( PnpBiosScanForWakeInterrupt(a2, a3) )
  {
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1120), 0x100000000uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x10000uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1120), 0x100000uLL);
  }
  result = PnpBiosScanForGpioInterrupt(a2, a3);
  if ( (_BYTE)result )
  {
    result = 0x800000000LL;
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1120), 0x800000000uLL);
  }
  return result;
}
