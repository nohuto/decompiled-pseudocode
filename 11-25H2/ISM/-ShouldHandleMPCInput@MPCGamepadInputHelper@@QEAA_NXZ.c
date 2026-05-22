/*
 * XREFs of ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800B4BC8
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801B7A00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B89D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCGamepadInputHelper::ShouldHandleMPCInput(MPCGamepadInputHelper *this)
{
  char v2; // bl

  v2 = 1;
  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) != 1
    || (*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3664) & 2) != 0
    || *(_BYTE *)this && !*((_BYTE *)this + 41) )
  {
    return 0;
  }
  return v2;
}
