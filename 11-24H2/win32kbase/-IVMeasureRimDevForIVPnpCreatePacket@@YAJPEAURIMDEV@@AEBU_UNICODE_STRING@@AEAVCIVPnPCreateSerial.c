/*
 * XREFs of ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x140216224
 * Callers:
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021AC00 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x1402212B4 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x140221370 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

int __fastcall IVMeasureRimDevForIVPnpCreatePacket(
        struct RIMDEV *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVPnPCreateSerializer *a3)
{
  __int64 v3; // rsi
  int result; // eax

  v3 = *((_QWORD *)a3 + 2);
  result = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 8), (const struct _UNICODE_STRING *)a1 + 12, 1);
  if ( result >= 0 )
  {
    *((_DWORD *)a3 + 2) += (*((_DWORD *)a1 + 78) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a1 + 12) != 2 )
      return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1360), a2, 1);
    result = CIVPnPCreateSerializer::Serialize(
               a3,
               (struct _IV_HID_DEVICE_INFO *)(v3 + 88),
               (struct RIMDEV *)((char *)a1 + 440),
               1);
    if ( result >= 0 )
      return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1360), a2, 1);
  }
  return result;
}
