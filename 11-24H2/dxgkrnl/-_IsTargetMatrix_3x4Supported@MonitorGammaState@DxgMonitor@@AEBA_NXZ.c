/*
 * XREFs of ?_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEBA_NXZ @ 0x1402DF468
 * Callers:
 *     ?OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ @ 0x140279D60 (-OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ.c)
 *     ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1403CB590 (-_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 * Callees:
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1402DF6AC (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 */

bool __fastcall DxgMonitor::MonitorGammaState::_IsTargetMatrix_3x4Supported(DxgMonitor::MonitorGammaState *this)
{
  char v1; // bl
  _D3DDDI_GAMMARAMP_TYPE v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  if ( (int)DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v3) >= 0 )
    return v3 == D3DDDI_GAMMARAMP_MATRIX_3x4;
  return v1;
}
