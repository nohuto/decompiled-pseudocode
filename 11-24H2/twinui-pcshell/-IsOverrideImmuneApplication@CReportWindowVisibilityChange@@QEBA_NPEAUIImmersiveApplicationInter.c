/*
 * XREFs of ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18009A98C
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180033410 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180068EC0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180069280 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180069714 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1801BDF20 (-IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ.c)
 *     ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x1801CF4C0 (-s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z.c)
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802EB360 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802EBAA0 (-SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CReportWindowVisibilityChange::IsOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  struct IUnknown **v4; // rdi
  struct IUnknown **v5; // rbp
  int v6; // ebx
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v9; // [rsp+48h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 6);
  v5 = (struct IUnknown **)*((_QWORD *)this + 7);
  if ( v4 != v5 )
  {
    v9 = &v8;
    do
    {
      v8 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      v6 = SHIsSameObject(a2, v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
      if ( v6 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return v4 != *((struct IUnknown ***)this + 7);
}
