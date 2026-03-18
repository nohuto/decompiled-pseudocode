/*
 * XREFs of ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1400250F4
 * Callers:
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401D16E8 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403CB910 (DxgSetPowerComponentActiveCB.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140025440 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCB(DXGADAPTER *this, unsigned int a2)
{
  unsigned int v3; // edi

  v3 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1620);
  if ( v3 >= *((_DWORD *)this + 842) )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1435;
  }
  if ( *((_BYTE *)this + 3665) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(520LL * v3 + *((_QWORD *)this + 403) + 348));
    DXGADAPTER::SetPowerComponentActiveCBWorker(this, v3, 1u, 0);
  }
  else
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1440;
  }
}
