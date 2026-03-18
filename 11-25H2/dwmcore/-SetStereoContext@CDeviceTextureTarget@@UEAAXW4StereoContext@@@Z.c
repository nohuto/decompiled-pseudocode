/*
 * XREFs of ?SetStereoContext@CDeviceTextureTarget@@UEAAXW4StereoContext@@@Z @ 0x1802D70E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetStereoContext(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
}
