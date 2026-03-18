/*
 * XREFs of PipProcessStartPhase2 @ 0x1408B23C8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1404BD534 (McTemplateK0dz_EtwWriteTransfer.c)
 *     IoRequestDeviceEject @ 0x1405A49B0 (IoRequestDeviceEject.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407239C8 (PnpUpdateRebootRequiredReason.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14072D5E8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x14072D71C (PpProfileCommitTransitioningDock.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408B24D0 (IopDoDeferredSetInterfaceState.c)
 *     PnpRequestDeviceRemoval @ 0x140A1132C (PnpRequestDeviceRemoval.c)
 *     IopAllocateLegacyBootResources @ 0x140C23F28 (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  unsigned int v7; // esi
  int v8; // eax

  if ( (byte_140EEFD23 & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      2,
      *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( *(_DWORD *)(a1 + 568) )
  {
    if ( v4 >= 0 )
    {
      PpProfileCommitTransitioningDock(a1, 2);
LABEL_5:
      IopDoDeferredSetInterfaceState(a1);
      if ( !IopBootConfigsReserved )
      {
        v8 = *(_DWORD *)(a1 + 448);
        if ( v8 != -1 )
        {
          if ( v8 == 1 )
            IopAllocateLegacyBootResources(2LL, *(unsigned int *)(a1 + 452));
          IopAllocateLegacyBootResources(*(unsigned int *)(a1 + 448), *(unsigned int *)(a1 + 452));
        }
      }
      PipSetDevNodeState(a1, 777);
      goto LABEL_7;
    }
    PpProfileCancelHardwareProfileTransition();
  }
  else if ( v4 >= 0 )
  {
    goto LABEL_5;
  }
  if ( v4 == -1073741102 )
  {
    v7 = 14;
    PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), a2, 0x40000000LL);
  }
  else
  {
    v7 = 10;
  }
  PnpRequestDeviceRemoval(a1, 0LL, v7);
  if ( *(_DWORD *)(a1 + 568) )
    IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
LABEL_7:
  if ( (byte_140EEFD23 & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      *(_QWORD *)(a1 + 48),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v5,
      2,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
