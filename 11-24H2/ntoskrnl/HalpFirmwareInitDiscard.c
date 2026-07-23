/*
 * XREFs of HalpFirmwareInitDiscard @ 0x140C11600
 * Callers:
 *     HalpFirmwareInitSystem @ 0x140B4F2B0 (HalpFirmwareInitSystem.c)
 * Callees:
 *     HalpEfiInitialization @ 0x140C10F64 (HalpEfiInitialization.c)
 */

__int64 __fastcall HalpFirmwareInitDiscard(__int64 a1)
{
  off_140E00A80[0] = (__int64 (__fastcall *)())HalpQueryCapsuleCapabilities;
  off_140E00A88[0] = HalpUpdateCapsule;
  off_140E00B80[0] = (__int64 (__fastcall *)())HalpIsEFIRuntimeActive;
  off_140E00BC0[0] = (__int64 (__fastcall *)())HalpEnumerateEnvironmentVariablesWithFilter;
  return HalpEfiInitialization(a1);
}
