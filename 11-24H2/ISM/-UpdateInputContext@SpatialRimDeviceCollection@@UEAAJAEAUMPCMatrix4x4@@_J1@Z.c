/*
 * XREFs of ?UpdateInputContext@SpatialRimDeviceCollection@@UEAAJAEAUMPCMatrix4x4@@_J1@Z @ 0x1800D9640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z @ 0x1800BB898 (-UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::UpdateInputContext(
        SpatialRimDeviceCollection *this,
        struct MPCMatrix4x4 *a2,
        __int64 a3)
{
  MPCHolographicInputManager *Instance; // rax

  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::UpdateInputContext(Instance, a2, a3);
  return 0LL;
}
