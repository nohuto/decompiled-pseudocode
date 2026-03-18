/*
 * XREFs of PiDcContainerRequiresConfiguration @ 0x140A9E6E0
 * Callers:
 *     PiDcHandleSystemFirmwareUpdate @ 0x1407276C0 (PiDcHandleSystemFirmwareUpdate.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140990834 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcHandleDeviceEvent @ 0x140A424AC (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140A4267C (PiDcHandleInterfaceEvent.c)
 * Callees:
 *     wcscmp @ 0x1404FFE20 (wcscmp.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _PnpSetObjectProperty @ 0x1408B88E8 (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDcContainerRequiresConfiguration(wchar_t *Str2)
{
  int ObjectProperty; // ebx
  int v4; // [rsp+88h] [rbp+10h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  ObjectProperty = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       Str2,
                       5u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                       &v4,
                       (const wchar_t *)&v5,
                       4u,
                       (__int64)&v6,
                       0);
    if ( ObjectProperty < 0 || v4 != 7 || v5 != -1 )
    {
      ObjectProperty = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Str2,
                         5u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                         7,
                         (__int64)&unconfiguredConfigFlags,
                         4u,
                         0);
      if ( ObjectProperty >= 0 )
        ZwUpdateWnfStateData((__int64)&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL);
    }
  }
  return (unsigned int)ObjectProperty;
}
