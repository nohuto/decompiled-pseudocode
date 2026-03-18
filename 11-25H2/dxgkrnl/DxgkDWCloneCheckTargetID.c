/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1401C1C18
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x14040701C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(int a1)
{
  DXGGLOBAL::GetGlobal();
  return (a1 & 0xFF000000) == 0;
}
