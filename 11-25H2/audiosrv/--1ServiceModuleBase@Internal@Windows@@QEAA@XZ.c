/*
 * XREFs of ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800CC4B4
 * Callers:
 *     ??1ServiceModule@Internal@Windows@@UEAA@XZ @ 0x1800CC48C (--1ServiceModule@Internal@Windows@@UEAA@XZ.c)
 *     ??1SvcHostModule@Internal@Windows@@UEAA@XZ @ 0x1800CC4E4 (--1SvcHostModule@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Internal::ServiceModuleBase::~ServiceModuleBase(Windows::Internal::ServiceModuleBase *this)
{
  *(_QWORD *)this = &Windows::Internal::ServiceModuleBase::`vftable';
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 3);
  wil::details::unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>((_QWORD *)this + 1);
}
