/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140A68CA8
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x140A68A14 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140717A44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpPoFxActivateDevice @ 0x140834FC8 (PnpPoFxActivateDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNode(
        ULONG_PTR MaxDataSize,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        UNICODE_STRING *a6)
{
  unsigned int v6; // edi
  int v10; // edx
  int v11; // edx
  __int64 v13; // r9

  v6 = 0;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          PnpPoFxActivateDevice(MaxDataSize, 8);
          PnpSurpriseRemoveLockedDeviceNode(MaxDataSize, a3, a4, v13);
        }
      }
      else
      {
        PnpPoFxActivateDevice(MaxDataSize, 16);
        PnpRemoveLockedDeviceNode(MaxDataSize, a3, a4);
      }
    }
    else
    {
      if ( (*(_DWORD *)(MaxDataSize + 704) & 4) == 0 )
        KeBugCheckEx(0xCAu, 0xDuLL, MaxDataSize, 4uLL, 0LL);
      PoFxIdleDevice(*(_QWORD *)(MaxDataSize + 32));
      *(_DWORD *)(MaxDataSize + 704) &= ~4u;
      PnpCancelRemoveLockedDeviceNode(MaxDataSize);
    }
  }
  else
  {
    PnpPoFxActivateDevice(MaxDataSize, 4);
    return (unsigned int)PnpQueryRemoveLockedDeviceNode(MaxDataSize, a5, a6);
  }
  return v6;
}
