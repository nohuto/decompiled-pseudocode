/*
 * XREFs of ?AddRef@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802D69D0
 * Callers:
 *     ??4?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIDeviceTextureTarget@@@Z @ 0x180042F3C (--4-$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIDeviceTe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 240));
}
