/*
 * XREFs of ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18007539C
 * Callers:
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x1800750AC (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x1800752F4 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B9BE4 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800BECA4 (--1MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BEF0C (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18009BEC0 (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x1800BEE94 (-Update2DCursor@MPCCursorManager@@AEAAX_N@Z.c)
 */

void __fastcall MPCCursorManager::UpdateCursorVisibility(
        MPCCursorManager *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4)
{
  int v6; // r8d
  bool v7; // al

  v6 = (4 * a3) | (*((_BYTE *)this + 56) != 0 ? 8 : 0) | (*((_BYTE *)this + 65) != 0 ? 0x10 : 0) | ((*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3366) | a2) != 0
                                                                                                  ? 2
                                                                                                  : 0);
  if ( *((_DWORD *)this + 15) != v6 || a4 )
  {
    *((_DWORD *)this + 15) = v6;
    v7 = MPCCursorManager::Is2DCursorVisible(this);
    MPCCursorManager::Update2DCursor(this, v7);
  }
}
