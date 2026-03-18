/*
 * XREFs of DxgkDestroyDeviceInternal @ 0x1401BD028
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14002EE88 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x14009B090 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x14039D208 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyDeviceInternal(const struct _D3DKMT_DESTROYDEVICE *a1)
{
  return DxgkDestroyDeviceImpl(a1, 0);
}
