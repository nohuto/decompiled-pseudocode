/*
 * XREFs of ?GetDevice@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EBAPEAVCD3DDevice@@XZ @ 0x1802D6760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::GetDevice(__int64 a1)
{
  return IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(a1 - 72);
}
