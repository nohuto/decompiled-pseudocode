/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1401C6234
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1403FF92C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(int a1)
{
  DXGGLOBAL::GetGlobal();
  return (a1 & 0xFF000000) == 0;
}
