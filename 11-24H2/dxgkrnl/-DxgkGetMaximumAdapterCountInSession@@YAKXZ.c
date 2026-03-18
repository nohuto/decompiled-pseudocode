/*
 * XREFs of ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x14034A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140349488 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 DxgkGetMaximumAdapterCountInSession(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
}
