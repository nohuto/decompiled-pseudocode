/*
 * XREFs of ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DA6F0
 * Callers:
 *     ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803DACE0 (-OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18038C020 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803D9A40 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803DA8F0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180682848 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::NotifySpeechTextInputHeightChange(CortanaDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  ExperienceManagerUtils *v4; // rax
  HMONITOR v5; // r8
  int v6; // ebx
  unsigned int SpeechTextInputHeight; // eax
  HMONITOR v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // r8
  int v14; // eax
  __int64 v15; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  RECT rc; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *((float *)this + 49);
  rc.left = (int)v2;
  v3 = *((float *)this + 50);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 51));
  rc.bottom = (int)(float)(v3 + *((float *)this + 52));
  v4 = (ExperienceManagerUtils *)MonitorFromRect(&rc, 0);
  v6 = (int)v4;
  if ( v4 )
  {
    SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v4, v5);
    ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)SpeechTextInputHeight, v6, v8);
    v17 = 0LL;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v21,
           (__int64 *)&v17);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
LABEL_9:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      return v10;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
      v17);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D340,
            v11);
    v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
            (HSTRING)v12[1].Reserved.Reserved1,
            v13);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 2702LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      goto LABEL_9;
    }
    v14 = CortanaDesktopExperienceView::NotifyView(this, L"NotifySpeechTextInputHeightChange", v17);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 2704LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  }
  return 0LL;
}
