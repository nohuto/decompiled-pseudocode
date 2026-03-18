/*
 * XREFs of ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1801CA704
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x1802BD5E0 (-ProcessDeviceLost@CD3DDevice@@IEAAXXZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CA788 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1801CA824 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD3DDevice::DestroyAllResources(CD3DDevice *this)
{
  CD2DContext::DestroyDeviceResources((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyDeviceResources((CD3DDevice *)((char *)this + 1120));
  CD3DDevice::Trim(this);
}
