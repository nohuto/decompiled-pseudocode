/*
 * XREFs of ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033D328
 * Callers:
 *     ?CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUGamingPostureSystemDialog@34567@AEBUhstring@7@AEBUguid@7@@Z @ 0x18032E7DC (-CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Wi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAA@XZ @ 0x18032D1FC (--1-$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U-$default_delete@VSyste.c)
 *     ??1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x18032D3F8 (--1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$?4U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@$0A@@?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18033C628 (--$-4U-$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@$0A@@-$uniq.c)
 *     ??$Start@PEBGUguid@winrt@@_N@SystemDialogActivity@GamingPostureUXTelemetryProvider@@SA?AV01@$$QEAPEBG$$QEAUguid@winrt@@$$QEA_N@Z @ 0x18033C78C (--$Start@PEBGUguid@winrt@@_N@SystemDialogActivity@GamingPostureUXTelemetryProvider@@SA-AV01@$$QE.c)
 *     ??$make_unique@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@V12@$0A@@std@@YA?AV?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@0@$$QEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x18033CEC0 (--$make_unique@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@V12@$0A@@std@@YA-AV-$uniq.c)
 *     ?TransferToMember@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA?AV12@XZ @ 0x18033F8B0 (-TransferToMember@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::GamingPostureSystemDialog(
        __int64 a1,
        const struct winrt::hstring *a2,
        struct _GUID *a3,
        _QWORD *a4)
{
  GamingPostureUXTelemetryProvider::SystemDialogActivity **v8; // rax
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  const unsigned __int16 *v11; // [rsp+28h] [rbp-D8h] BYREF
  struct wil::details::IFailureCallback *v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[336]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[336]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  v12[1] = (struct wil::details::IFailureCallback *)a1;
  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureSystemDialog>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 24), a2);
  *(struct _GUID *)(a1 + 32) = *a3;
  *(_WORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 50) = 0;
  *(_QWORD *)(a1 + 56) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( !*(_QWORD *)a2 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturesystemdialog.cpp",
      (const char *)0x80070057LL,
      v10);
  if ( !*a4 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x23,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturesystemdialog.cpp",
      (const char *)0x80070057LL,
      v10);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    LOBYTE(v10) = 0;
    v11 = winrt::hstring::c_str(a2);
    GamingPostureUXTelemetryProvider::SystemDialogActivity::Start<unsigned short const *,winrt::guid,bool>(
      (GamingPostureUXTelemetryProvider::SystemDialogActivity *)v13,
      &v11,
      a3,
      (bool *)&v10);
    GamingPostureUXTelemetryProvider::SystemDialogActivity::TransferToMember(v13, v14);
    v8 = std::make_unique<GamingPostureUXTelemetryProvider::SystemDialogActivity,GamingPostureUXTelemetryProvider::SystemDialogActivity,0>(v12);
    std::unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>::operator=<std::default_delete<GamingPostureUXTelemetryProvider::SystemDialogActivity>,0>(
      (GamingPostureUXTelemetryProvider::SystemDialogActivity **)(a1 + 72),
      v8);
    std::unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>::~unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>(v12);
    GamingPostureUXTelemetryProvider::SystemDialogActivity::~SystemDialogActivity((GamingPostureUXTelemetryProvider::SystemDialogActivity *)v14);
    GamingPostureUXTelemetryProvider::SystemDialogActivity::~SystemDialogActivity((GamingPostureUXTelemetryProvider::SystemDialogActivity *)v13);
  }
  return a1;
}
