/*
 * XREFs of PpIrpQueryCapabilities @ 0x1408B94D8
 * Callers:
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14097B294 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiControlGetDevicePowerData @ 0x140A5B688 (PiControlGetDevicePowerData.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(int a1, _DWORD *a2)
{
  __int16 v5; // [rsp+30h] [rbp-58h] BYREF
  _DWORD *v6; // [rsp+38h] [rbp-50h]

  memset_0(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset_0(&v5, 0, 0x48uLL);
  v5 = 2331;
  v6 = a2;
  return IopSynchronousCall(a1, (unsigned int)&v5, -1073741637, 0, 0LL);
}
