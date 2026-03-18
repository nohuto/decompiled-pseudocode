/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x140720500
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14071C9FC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceContext @ 0x140890EB0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x140891014 (PiDevCfgFreeDeviceContext.c)
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
