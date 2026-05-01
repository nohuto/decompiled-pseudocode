/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801342C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180134130 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180134130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 646674328
    || a2[1] != *(_DWORD *)&GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data2
    || a2[2] != *(_DWORD *)GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data4
    || a2[3] != *(_DWORD *)&GUID_268b7798_2d57_434c_b84f_eabec0ffee84.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 1629137150
      || a2[1] != *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data2
      || a2[2] != *(_DWORD *)GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4
      || a2[3] != *(_DWORD *)&GUID_611aa8fe_b694_4129_86af_2c2553fff785.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -1811144131
        || a2[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        || a2[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        || a2[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -1850735350
          || a2[1] != *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data2
          || a2[2] != *(_DWORD *)GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4
          || a2[3] != *(_DWORD *)&GUID_91b0050a_78af_434e_ae0c_89943ac0ffee.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != -1509395416
            || a2[1] != *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data2
            || a2[2] != *(_DWORD *)GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4
            || a2[3] != *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4[4] )
          {
            a1 += 8LL;
            if ( *a2 != -1350618835
              || a2[1] != *(_DWORD *)&GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee.Data2
              || a2[2] != *(_DWORD *)GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee.Data4
              || a2[3] != *(_DWORD *)&GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee.Data4[4] )
            {
              return 2147500034LL;
            }
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
