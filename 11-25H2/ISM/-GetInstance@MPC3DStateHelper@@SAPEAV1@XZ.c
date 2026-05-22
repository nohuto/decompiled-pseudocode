/*
 * XREFs of ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800334CC
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18003285C (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18003310C (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180033360 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180034544 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800BD1C0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CC940 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800CF1C0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D38B8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D4A50 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FBAD0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FC5C0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FCD14 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801C0EF0 (-MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     std::call_once__lambda_4bfd0116db80ce4255855ce8af72e9c8___ @ 0x180033504 (std--call_once__lambda_4bfd0116db80ce4255855ce8af72e9c8___.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPC3DStateHelper *MPC3DStateHelper::GetInstance(void)
{
  const char *v0; // r9
  struct MPC3DStateHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::call_once__lambda_4bfd0116db80ce4255855ce8af72e9c8___();
  result = MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v0);
  return result;
}
