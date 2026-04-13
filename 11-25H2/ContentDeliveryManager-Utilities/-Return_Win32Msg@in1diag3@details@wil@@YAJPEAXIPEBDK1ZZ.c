/*
 * XREFs of ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003A158
 * Callers:
 *     ??$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x180027B84 (--$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E270 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x180033144 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18003B28C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ??$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z @ 0x180048060 (--$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z.c)
 *     ?SetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800A7A18 (-SetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 *     ?TryGetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAPEA_W@Z @ 0x1800A7B44 (-TryGetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAPEA_W@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800AD008 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00I@Z @ 0x1800AED68 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00I@Z.c)
 * Callees:
 *     ??$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180027B04 (--$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Return_Win32Msg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        const char *a6,
        ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  wil::details *v8; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  LODWORD(v8) = (_DWORD)a4;
  return wil::details::ReportFailure_Win32Msg<1>(
           (__int64)this,
           (int)a2,
           a3,
           (__int64)a4,
           v7,
           retaddr,
           v8,
           a5,
           (char *)&a6);
}
