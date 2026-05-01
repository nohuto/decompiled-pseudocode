/*
 * XREFs of ?AllowNextShowWindow@GamingPosturePositioner@@UEAAXPEAUHWND__@@I@Z @ 0x1804FA350
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800EB7F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$AllowNextShowWindow@AEAPEAUHWND__@@AEAI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAI@Z @ 0x1804F3DF4 (--$AllowNextShowWindow@AEAPEAUHWND__@@AEAI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUH.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPosturePositioner::AllowNextShowWindow(GamingPosturePositioner *this, __int64 a2, int a3)
{
  const char *v6; // r9
  const struct _tlgProvider_t *v7; // rax
  __int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      GamingPosturePositionerTelemetryProvider::AllowNextShowWindow<HWND__ * &,unsigned int &>(&v10, &v11);
    }
    else if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v7 = GamingPosturePositionerTelemetryProvider::Provider();
      if ( *(_DWORD *)v7 > 4u )
      {
        v12 = a3;
        v8[0] = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (__int64)v7,
          byte_180809537,
          0LL,
          0LL,
          (__int64)v8,
          (__int64)&v12);
      }
    }
    *((_QWORD *)this + 119) = a2;
    *((_DWORD *)this + 240) = a3;
    *((_QWORD *)this + 121) = 0LL;
    *((_DWORD *)this + 244) = 0;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8C6,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v6);
  }
}
