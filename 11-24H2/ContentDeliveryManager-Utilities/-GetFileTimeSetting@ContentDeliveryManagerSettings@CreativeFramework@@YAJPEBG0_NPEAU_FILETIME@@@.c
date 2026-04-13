/*
 * XREFs of ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x180051CBC
 * Callers:
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180053A70 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 *     ?GetFileTimeSetting@Details@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG0_N@Z @ 0x18006197C (-GetFileTimeSetting@Details@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG0_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetSettingValue@_K$0EA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEA_K_K@Z @ 0x1800461F8 (--$GetSettingValue@_K$0EA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
        const WCHAR *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        _QWORD *a4)
{
  int Setting; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  Setting = CreativeFramework::ContentDeliveryManagerSettings::Details::GetSettingValue<unsigned __int64,64>(
              (__int64)this,
              this,
              a2,
              (char)a3,
              &v9);
  v6 = Setting;
  if ( Setting >= 0 )
  {
    *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)(unsigned int)Setting);
    return v6;
  }
}
