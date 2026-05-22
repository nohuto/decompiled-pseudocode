/*
 * XREFs of ?GetHaptics@BamoPenDevicePrincipal@@UEAAPEAVBamoSimpleHapticsControllerPrincipal@@XZ @ 0x1800B1700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoSimpleHapticsControllerPrincipal *__fastcall BamoPenDevicePrincipal::GetHaptics(
        BamoPenDevicePrincipal *this)
{
  return (struct BamoSimpleHapticsControllerPrincipal *)*((_QWORD *)this + 8);
}
