/*
 * XREFs of ?GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z @ 0x18006175C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006279C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$GetSettingValue@K$0BA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18004611C (--$GetSettingValue@K$0BA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY_.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetBoolSetting(
        const WCHAR *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  int Setting; // ebx
  DWORD v8; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  *a4 = 0;
  Setting = CreativeFramework::ContentDeliveryManagerSettings::Details::GetSettingValue<unsigned long,16>(
              HKEY_CURRENT_USER,
              this,
              L"UpdateDrivenByExpiration",
              (__int64)a4,
              &v10,
              v8);
  if ( Setting >= 0 )
  {
    *a4 = v10 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x12D,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)(unsigned int)Setting,
      (unsigned __int64)"RegKey: %ws %ws",
      (const char *)this,
      L"UpdateDrivenByExpiration");
    return (unsigned int)Setting;
  }
}
