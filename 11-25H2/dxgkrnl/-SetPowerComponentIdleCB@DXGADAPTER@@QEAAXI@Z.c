/*
 * XREFs of ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x140016DB8
 * Callers:
 *     DxgSetPowerComponentIdleCB @ 0x140016C10 (DxgSetPowerComponentIdleCB.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401D16E8 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401D1B70 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140014E70 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCB(DXGADAPTER *this, unsigned int a2)
{
  unsigned int v3; // edi

  v3 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1620);
  if ( v3 >= *((_DWORD *)this + 842) )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1786;
  }
  if ( *((_BYTE *)this + 3665) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(520LL * v3 + *((_QWORD *)this + 403) + 348));
    DXGADAPTER::SetPowerComponentIdleCBWorker(this, v3, 0LL);
  }
  else
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1791;
  }
}
