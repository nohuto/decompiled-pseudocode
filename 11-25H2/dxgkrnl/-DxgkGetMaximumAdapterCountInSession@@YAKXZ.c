/*
 * XREFs of ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x140408890
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x14031D0E8 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 DxgkGetMaximumAdapterCountInSession(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
}
