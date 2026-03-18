/*
 * XREFs of DxgUnregisterSharedPowerDriverCB @ 0x1401B6A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401D1B70 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 */

__int64 __fastcall DxgUnregisterSharedPowerDriverCB(DXGADAPTER *a1, void *a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::UnregisterSharedPowerDriver(Global, a1, a2);
}
