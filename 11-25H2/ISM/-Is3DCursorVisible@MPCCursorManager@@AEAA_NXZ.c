/*
 * XREFs of ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x1800755D4
 * Callers:
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18007530C (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x180075554 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall MPCCursorManager::Is3DCursorVisible(MPCCursorManager *this)
{
  int v1; // edx
  char v2; // cl

  v1 = *((_DWORD *)this + 15);
  v2 = 1;
  if ( v1 != 1 && (v1 & 0x18) == 0x18 )
    return (v1 & 4) != 0;
  return v2;
}
