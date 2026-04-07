/*
 * XREFs of ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x1800DE01C
 * Callers:
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800DDCDC (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x1800DE01C (-_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z.c)
 * Callees:
 *     ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x1800DE01C (-_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z.c)
 */

bool __fastcall CTransitionVisualController::_IsOwnedByWindow(
        CTransitionVisualController *this,
        const struct CWindowData *a2,
        HWND a3)
{
  HWND *v3; // rdx
  bool result; // al

  v3 = (HWND *)*((_QWORD *)a2 + 75);
  result = 0;
  if ( v3 )
    return v3[5] == a3 || CTransitionVisualController::_IsOwnedByWindow(this, (const struct CWindowData *)v3, a3);
  return result;
}
