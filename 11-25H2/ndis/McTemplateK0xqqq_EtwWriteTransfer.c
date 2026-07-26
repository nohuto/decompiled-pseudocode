/*
 * XREFs of McTemplateK0xqqq_EtwWriteTransfer @ 0x140065D00
 * Callers:
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140063390 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1400647B0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x140091710 (NdisReleaseNicActive.c)
 *     NdisTryAcquireNicActive @ 0x140091900 (NdisTryAcquireNicActive.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-68h] BYREF
  va_list v5; // [rsp+40h] [rbp-58h]
  __int64 v6; // [rsp+48h] [rbp-50h]
  va_list v7; // [rsp+50h] [rbp-48h]
  __int64 v8; // [rsp+58h] [rbp-40h]
  va_list v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  va_list v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]
  __int64 v13; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v15; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  __int64 v17; // [rsp+C8h] [rbp+30h] BYREF
  va_list va2; // [rsp+C8h] [rbp+30h]
  va_list va3; // [rsp+D0h] [rbp+38h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 5u, &v4);
}
