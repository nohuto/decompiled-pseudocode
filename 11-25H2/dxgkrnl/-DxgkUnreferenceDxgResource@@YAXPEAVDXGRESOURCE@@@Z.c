/*
 * XREFs of ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x14039E240
 * Callers:
 *     ?FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140045664 (-FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkUnreferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 9);
}
