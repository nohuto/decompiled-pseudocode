/*
 * XREFs of ACPICMButtonStart @ 0x14009C064
 * Callers:
 *     ACPICMExperienceButtonStart @ 0x14009C0F0 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x14009C230 (ACPICMLidStart.c)
 *     ACPICMPowerButtonStart @ 0x14009C250 (ACPICMPowerButtonStart.c)
 *     ACPICMSleepButtonStart @ 0x14009C270 (ACPICMSleepButtonStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(__int64, __int64, _QWORD))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
