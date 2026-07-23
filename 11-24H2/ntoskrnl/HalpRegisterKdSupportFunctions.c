/*
 * XREFs of HalpRegisterKdSupportFunctions @ 0x140C1671C
 * Callers:
 *     HalpDbgInitSystem @ 0x140B4F4D0 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpRegisterKdSupportFunctions()
{
  __int64 *result; // rax

  off_140E00850[0] = (__int64 (__fastcall *)())HalpCheckPowerButton;
  off_140E00838[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  off_140E00848[0] = (__int64 (__fastcall *)())HalAcpiGetTable;
  off_140E00860[0] = (__int64 (__fastcall *)())HalpMapPhysicalMemoryWriteThrough64;
  off_140E00868 = (__int64 (__fastcall *)())HalpUnmapVirtualAddress;
  qword_140E00870 = (__int64)HalpKdReadPCIConfig;
  qword_140E00878 = (__int64)HalpKdWritePCIConfig;
  off_140E00A68[0] = (__int64 (__fastcall *)())HalpKdEnumerateDebuggingDevices;
  off_140E00840[0] = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140E00948 = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140E00B98[0] = (__int64 (__fastcall *)())HalpWatchdogDelayExpiration;
  result = &qword_140F8EF88;
  qword_140F8EF90 = (__int64)&qword_140F8EF88;
  qword_140F8EF88 = (__int64)&qword_140F8EF88;
  off_140E00940[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  return result;
}
