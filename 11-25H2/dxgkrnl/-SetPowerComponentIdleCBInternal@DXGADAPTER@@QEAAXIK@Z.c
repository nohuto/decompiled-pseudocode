/*
 * XREFs of ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x140014DF0
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140062E78 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x14006C3F0 (DxgSetPowerComponentIdleCBInternal.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x14018C908 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1403E8EE8 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140014E70 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBInternal(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  if ( a2 >= *((_DWORD *)this + 842) )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1824;
  }
  DXGADAPTER::SetPowerComponentIdleCBWorker(this, a2, a3);
}
