/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0206B4C
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1C0174BB0 (NtRIMAreSiblingDevices.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0174E20 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMSetTestModeStatus @ 0x1C0175610 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionIsUsermodeRIMAccessAllowed()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C0296368 && (int)qword_1C0296368() >= 0 && qword_1C0296370 )
    return (unsigned int)qword_1C0296370();
  return v0;
}
