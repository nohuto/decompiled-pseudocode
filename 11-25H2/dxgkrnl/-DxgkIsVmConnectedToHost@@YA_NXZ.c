/*
 * XREFs of ?DxgkIsVmConnectedToHost@@YA_NXZ @ 0x140068738
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140281B78 (IsFeatureEnabledUncached.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403B39D4 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

bool DxgkIsVmConnectedToHost(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::IsVmConnectedToHost(Global) != 0;
}
