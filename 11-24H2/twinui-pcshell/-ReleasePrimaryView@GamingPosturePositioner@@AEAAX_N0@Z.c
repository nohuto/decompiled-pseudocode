/*
 * XREFs of ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180505828
 * Callers:
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FBB10 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180500750 (-HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x180500C08 (-HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502640 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805032C0 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18000B3AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x180502520 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_180502520.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ @ 0x180505A6C (-ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z @ 0x180506B24 (-SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z @ 0x180506EE8 (-SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60153759@@@details@wil@@QEAA_NXZ @ 0x1805086D4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60153759@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingPosturePositioner::ReleasePrimaryView(GamingPosturePositioner *this, char a2, char a3)
{
  __int64 *v6; // rbx
  char IsEnabled; // al
  struct IApplicationView *v8; // rdx
  __int64 (__fastcall ***v9)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v10)(); // rdx
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  int v13; // eax
  char v14; // al
  struct IApplicationView *v15; // rcx
  int v16; // eax
  const char *v17; // r9
  HWND WindowForView; // [rsp+48h] [rbp-80h] BYREF
  int v19[4]; // [rsp+50h] [rbp-78h]
  HWND v20; // [rsp+60h] [rbp-68h]
  __int64 (__fastcall **v21)(); // [rsp+70h] [rbp-58h] BYREF
  __int128 v22; // [rsp+78h] [rbp-50h]
  __int64 (__fastcall ***v23)(); // [rsp+A8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    v6 = (__int64 *)((char *)this + 256);
    if ( *((_QWORD *)this + 32) )
    {
      WindowForView = 0LL;
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl);
      v9 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*v6;
      if ( IsEnabled )
      {
        *(_QWORD *)v19 = &WindowForView;
        LOBYTE(v19[2]) = a2;
        BYTE1(v19[2]) = a3;
        v21 = off_18074DEB0;
        v22 = *(_OWORD *)v19;
        v23 = &v21;
        GamingPosturePositioner::LogViewDiagnosticInfo(v9, (__int64)&v21);
        if ( v23 )
        {
          v10 = &v21;
          LOBYTE(v10) = v23 != &v21;
          ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v10);
        }
      }
      else
      {
        WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v9, v8);
      }
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      {
        v12 = GamingPosturePositionerTelemetryProvider::Provider(v11);
        if ( *(_DWORD *)v12 > 4u )
        {
          v20 = WindowForView;
          *(_QWORD *)v19 = *v6;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            (__int64)v12,
            (__int64)&unk_180809A2F);
        }
      }
      if ( a3 )
      {
        if ( a2 )
        {
          if ( WindowForView )
          {
            v13 = DwmpTransitionWindow(WindowForView, 805306386LL);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x51D,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                (const char *)(unsigned int)v13);
          }
        }
        v14 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl);
        v15 = (struct IApplicationView *)*v6;
        if ( v14 )
        {
          GamingPosturePositioner::SetViewCloaking(v15, WindowForView, 1);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64))(*(_QWORD *)v15 + 96LL))(
                  v15,
                  1LL,
                  1LL);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x526,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
              (const char *)(unsigned int)v16);
        }
      }
      GamingPosturePositioner::SetInterceptMoveAndSize(this, WindowForView, 0);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v6);
      *((_BYTE *)this + 788) = 0;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60153759>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60153759>::GetImpl'::`2'::impl) )
      GamingPosturePositioner::ReleaseSecondaryView(this);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x534,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v17);
  }
}
