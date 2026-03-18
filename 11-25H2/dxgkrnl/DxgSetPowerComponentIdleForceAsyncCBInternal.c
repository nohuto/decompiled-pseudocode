/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x140014D20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140014E70 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  DXGADAPTER *v4; // rbx

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
    {
      v4 = *(DXGADAPTER **)(v3 + 4032);
      goto LABEL_6;
    }
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2065;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2058;
  }
  v4 = 0LL;
LABEL_6:
  if ( a2 >= *((_DWORD *)v4 + 842) )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, v4, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1824;
  }
  DXGADAPTER::SetPowerComponentIdleCBWorker(v4, a2, 2u);
}
