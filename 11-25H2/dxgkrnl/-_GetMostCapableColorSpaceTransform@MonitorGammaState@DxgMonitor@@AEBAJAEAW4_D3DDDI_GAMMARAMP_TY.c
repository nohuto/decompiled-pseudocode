/*
 * XREFs of ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1402D89D0
 * Callers:
 *     ?_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEBA_NXZ @ 0x1402D878C (-_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEBA_NXZ.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402D87C0 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042D880 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
        DxgMonitor::MonitorGammaState *this,
        enum _D3DDDI_GAMMARAMP_TYPE *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  enum _D3DDDI_GAMMARAMP_TYPE v6; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  *a2 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v5 = *(_DWORD *)(v4 + 48);
  v6 = D3DDDI_GAMMARAMP_MATRIX_3x4;
  if ( (v5 & 4) != 0 )
    goto LABEL_2;
  if ( (v5 & 1) != 0 )
  {
    v6 = D3DDDI_GAMMARAMP_RGB256x3x16;
LABEL_2:
    *a2 = v6;
    return 0LL;
  }
  return 3221225659LL;
}
