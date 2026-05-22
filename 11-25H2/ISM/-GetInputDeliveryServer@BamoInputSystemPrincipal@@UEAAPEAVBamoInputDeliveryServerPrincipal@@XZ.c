/*
 * XREFs of ?GetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAPEAVBamoInputDeliveryServerPrincipal@@XZ @ 0x18012C1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoInputDeliveryServerPrincipal *__fastcall BamoInputSystemPrincipal::GetInputDeliveryServer(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoInputDeliveryServerPrincipal *)*((_QWORD *)this + 12);
}
