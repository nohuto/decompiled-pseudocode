/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1801D89A4
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18022EA8C (--1CD3DDevice@@MEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x1802C6970 (-ProcessDeviceLost@CD3DDevice@@IEAAXXZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801D8A28 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1801D8AC4 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(CD3DDevice *this)
{
  CD2DContext::DestroyDeviceResources((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyDeviceResources((CD3DDevice *)((char *)this + 1120));
  CD3DDevice::Trim(this);
}
