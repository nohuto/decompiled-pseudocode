/*
 * XREFs of ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800B29D8
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801BEF30 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801BFD10 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCGamepadInputHelper::ShouldUseGazeAndCommit(MPCGamepadInputHelper *this, struct LegacyInputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  char v5; // cl

  Instance = MPCHolographicInputManager::GetInstance();
  v5 = 0;
  if ( (*((_BYTE *)Instance + 3664) & 2) == 0 && !*((_BYTE *)a2 + 636) )
    return *((_BYTE *)this + 39) == 0;
  return v5;
}
