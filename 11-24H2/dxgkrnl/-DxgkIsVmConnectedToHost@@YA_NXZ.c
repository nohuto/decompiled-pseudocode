/*
 * XREFs of ?DxgkIsVmConnectedToHost@@YA_NXZ @ 0x1400683B8
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140289024 (IsFeatureEnabledUncached.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403A4510 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

bool DxgkIsVmConnectedToHost(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::IsVmConnectedToHost(Global) != 0;
}
