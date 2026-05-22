/*
 * XREFs of ?GetShellHandwritingHostServer@BamoInputSystemPrincipal@@UEAAPEAVBamoShellHandwritingHostServerPrincipal@@XZ @ 0x18012E270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoShellHandwritingHostServerPrincipal *__fastcall BamoInputSystemPrincipal::GetShellHandwritingHostServer(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoShellHandwritingHostServerPrincipal *)*((_QWORD *)this + 18);
}
