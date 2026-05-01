/*
 * XREFs of ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ @ 0x18006CC60
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewTitlebarConfiguration@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@@012@@Z @ 0x18006B2A8 (--$MakeAndInitialize@VApplicationViewTitlebarConfiguration@@V1@$$V@Details@WRL@Microsoft@@YAJV-$.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18006E7E4 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18006CCB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewTitlebarConfiguration.c)
 */

ApplicationViewTitlebarConfiguration *__fastcall ApplicationViewTitlebarConfiguration::ApplicationViewTitlebarConfiguration(
        ApplicationViewTitlebarConfiguration *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &ApplicationViewTitlebarConfiguration::`vftable'{for `IApplicationViewTitlebarConfiguration'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_WORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_BYTE *)this + 84) = 0;
  *((_DWORD *)this + 22) = 0;
  return this;
}
