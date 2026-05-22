/*
 * XREFs of ?Release@ShellGesturesClientProxy@@WIA@EAAKXZ @ 0x180134300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellGesturesClientProxy::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 128));
}
