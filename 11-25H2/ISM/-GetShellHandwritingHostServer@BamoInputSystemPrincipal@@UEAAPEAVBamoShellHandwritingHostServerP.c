/*
 * XREFs of ?GetShellHandwritingHostServer@BamoInputSystemPrincipal@@UEAAPEAVBamoShellHandwritingHostServerPrincipal@@XZ @ 0x18012C1D0
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
