/*
 * XREFs of ?Release@ShellGesturesClientProxy@@WIA@EAAKXZ @ 0x1801364D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellGesturesClientProxy::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 128));
}
