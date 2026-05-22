/*
 * XREFs of ?GetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAPEAVBamoPenEventsDispatcherPrincipal@@XZ @ 0x18007A040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoPenEventsDispatcherPrincipal *__fastcall BamoInputSystemPrincipal::GetPenEventsDispatcher(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoPenEventsDispatcherPrincipal *)*((_QWORD *)this + 16);
}
