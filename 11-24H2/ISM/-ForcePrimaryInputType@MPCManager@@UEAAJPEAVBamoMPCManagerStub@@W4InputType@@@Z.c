/*
 * XREFs of ?ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z @ 0x1800B68C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall MPCManager::ForcePrimaryInputType(__int64 a1, __int64 a2, unsigned int a3)
{
  struct MPCHolographicInputManager *Instance; // rax

  Instance = MPCHolographicInputManager::GetInstance();
  return MPCHolographicInputManager::ForcePrimaryInputType(Instance, a3);
}
