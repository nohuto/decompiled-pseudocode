/*
 * XREFs of PpIrpQueryCapabilities @ 0x1408BBB7C
 * Callers:
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14099025C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiControlGetDevicePowerData @ 0x140A62D88 (PiControlGetDevicePowerData.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
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
