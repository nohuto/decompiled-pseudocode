/*
 * XREFs of PiIommuSaveDeviceAtsSettings @ 0x140733F70
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140981740 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiIommuSaveDeviceAtsSettings(__int64 a1)
{
  __int64 v1; // rdx
  char v3; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) >> 2) | *(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) & 0x40) >> 5;
  return PnpSetObjectProperty(PiPnpRtlCtx, v1, 1, 0LL, (__int64)DEVPKEY_Device_AtsSettings, 4099, (__int64)&v3, 1, 0);
}
