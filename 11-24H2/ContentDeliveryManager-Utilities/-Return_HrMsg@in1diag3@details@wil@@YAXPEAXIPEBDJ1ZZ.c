/*
 * XREFs of ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A238
 * Callers:
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x18002E8A0 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E940 (-DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DeleteSettingTree@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E9C8 (-DeleteSettingTree@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18002EC98 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180033EE4 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ??$GetSettingValue@K$0BA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18004611C (--$GetSettingValue@K$0BA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY_.c)
 *     ??$GetSettingValue@_K$0EA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEA_K_K@Z @ 0x1800461F8 (--$GetSettingValue@_K$0EA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18004E92C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?DoesStringSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18004EA00 (-DoesStringSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180054568 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     ?SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIPropertySet@Collections@Foundation@5@@Z @ 0x18005779C (-SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@Ap.c)
 *     ?GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z @ 0x18006175C (-GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18002754C (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        const char *a6,
        ...)
{
  int v6; // [rsp+20h] [rbp-48h]
  wil::details *v7; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  LODWORD(v7) = (_DWORD)a4;
  wil::details::ReportFailure_HrMsg<1>((__int64)this, (int)a2, a3, (__int64)a4, v6, retaddr, v7, a5, (char *)&a6);
}
