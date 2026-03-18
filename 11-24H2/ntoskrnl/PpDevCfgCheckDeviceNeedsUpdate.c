/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x14072C480
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072897C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceContext @ 0x140997624 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x140997788 (PiDevCfgFreeDeviceContext.c)
 */

__int64 __fastcall PpDevCfgCheckDeviceNeedsUpdate(__int64 a1, __int64 a2, unsigned int *a3)
{
  int inited; // ebx
  _BYTE v8[80]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v8, 0, 0x48uLL);
  inited = PiDevCfgInitDeviceContext(a1, a2, v8);
  if ( inited >= 0 )
    inited = PiDevCfgCheckDeviceNeedsUpdate((__int64)v8, a3);
  PiDevCfgFreeDeviceContext(v8);
  return (unsigned int)inited;
}
