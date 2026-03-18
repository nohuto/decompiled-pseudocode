/*
 * XREFs of PnpProcessTargetDeviceEvent @ 0x140A1B0C8
 * Callers:
 *     PnpDeviceEventWorker @ 0x14096E070 (PnpDeviceEventWorker.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404D5600 (McTemplateK0z_EtwWriteTransfer.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 */

__int64 __fastcall PnpProcessTargetDeviceEvent(const void **a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = 0;
  v2 = (__int64)*a1;
  v4 = *((_QWORD *)*a1 + 20);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  PiPnpRtlBeginOperation(&P);
  v7 = (_QWORD *)(v2 + 120);
  v8 = *(_QWORD *)(v2 + 120) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(v2 + 128) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
  if ( !v8 )
    goto LABEL_16;
  v9 = *v7 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
  if ( *v7 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
    v9 = *(_QWORD *)(v2 + 128) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
  if ( v9 )
  {
    v10 = *v7 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( *v7 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
      v10 = *(_QWORD *)(v2 + 128) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( v10 )
    {
      memcmp(v7, &GUID_DEVICE_NOOP, 0x10uLL);
      v1 = 0;
    }
    else
    {
      PiUEventNotifyUserMode(v2);
    }
  }
  else
  {
LABEL_16:
    if ( (byte_140EEFA6B & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        (__int64)v7,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Start,
        v6,
        *(const wchar_t **)(v5 + 48));
    v1 = PnpProcessQueryRemoveAndEject(a1);
    if ( (byte_140EEFA6B & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        v12,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Stop,
        v13,
        *(const wchar_t **)(v5 + 48));
  }
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v1;
}
