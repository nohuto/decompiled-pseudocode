/*
 * XREFs of ?SoftLandingV1Unexpected@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXXZ @ 0x1800A052C
 * Callers:
 *     ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800A05BC (-WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044660 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SoftLandingV1Unexpected(
        __int64 a1)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, byte_18016411B, 0LL, 0LL, 3u, &v4);
    }
  }
}
