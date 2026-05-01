/*
 * XREFs of ?MaximizeWin32View@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x180502FF8
 * Callers:
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FA678 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502640 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018E94C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1804F1628 (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 *     ??$MaximizingWin32View@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F60F0 (--$MaximizingWin32View@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND_.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::MaximizeWin32View(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-50h]
  _QWORD v14[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct IApplicationView *v16; // [rsp+80h] [rbp+10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF

  v17 = a3;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    GamingPosturePositionerTelemetryProvider::MaximizingWin32View<HWND__ * &>(&v17);
  }
  else if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v6 = GamingPosturePositionerTelemetryProvider::Provider();
    if ( *(_DWORD *)v6 > 4u )
    {
      v16 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v6,
        byte_180808D75,
        0LL,
        v7,
        (__int64)&v16);
    }
  }
  v14[0] = off_18074E1D0;
  v14[1] = this;
  v14[7] = v14;
  KioskPositioner::CreateApplicationViewOperation(v5, (__int64 *)&v16, 23, (__int64)v14);
  v8 = (__int64)v16;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v16 + 96LL))(v16, 1LL);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5B,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v9,
      v13);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 3LL);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v10,
      v13);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 72LL))(v8, 1LL);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5D,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v11,
      v13);
  v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v8);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5E,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v12,
      v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
}
