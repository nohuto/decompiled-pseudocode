/*
 * XREFs of McTemplateK0xqqq_EtwWriteTransfer @ 0x140037220
 * Callers:
 *     ndisDispatchRequest @ 0x14002CA40 (ndisDispatchRequest.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x14003ACE0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x14003C5F0 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x140075FC0 (NdisReleaseNicActive.c)
 *     NdisTryAcquireNicActive @ 0x1400761B0 (NdisTryAcquireNicActive.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 McTemplateK0xqqq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[10]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v5; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v7; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  __int64 v9; // [rsp+C8h] [rbp+30h] BYREF
  va_list va2; // [rsp+C8h] [rbp+30h]
  va_list va3; // [rsp+D0h] [rbp+38h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v9 = va_arg(va3, _QWORD);
  v4[3] = 8LL;
  va_copy((va_list)&v4[2], va);
  v4[5] = 4LL;
  va_copy((va_list)&v4[4], va1);
  v4[7] = 4LL;
  va_copy((va_list)&v4[6], va2);
  va_copy((va_list)&v4[8], va3);
  v4[9] = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&NDIS_PROVIDER_ID_Context, a2, a3, 5LL, v4);
}
