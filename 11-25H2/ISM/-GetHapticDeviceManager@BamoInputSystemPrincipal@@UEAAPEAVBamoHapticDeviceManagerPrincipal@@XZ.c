/*
 * XREFs of ?GetHapticDeviceManager@BamoInputSystemPrincipal@@UEAAPEAVBamoHapticDeviceManagerPrincipal@@XZ @ 0x18012C180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoHapticDeviceManagerPrincipal *__fastcall BamoInputSystemPrincipal::GetHapticDeviceManager(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoHapticDeviceManagerPrincipal *)*((_QWORD *)this + 15);
}
