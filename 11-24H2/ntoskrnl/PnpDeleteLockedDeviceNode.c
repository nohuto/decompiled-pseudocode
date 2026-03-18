/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140A6B71C
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x140A6B488 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1403D76E4 (PoFxIdleDevice.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140723B44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140723D70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
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
          PnpSurpriseRemoveLockedDeviceNode(MaxDataSize, a3, a4);
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
