/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C9760
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801C968C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_1801C968C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 1950073021
    || a2[1] != *(_DWORD *)&GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee.Data2
    || a2[2] != *(_DWORD *)GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee.Data4
    || a2[3] != *(_DWORD *)&GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != -1811144131
      || a2[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      || a2[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      || a2[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -690132783
        || a2[1] != *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data2
        || a2[2] != *(_DWORD *)GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4
        || a2[3] != *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 1425846859
          || a2[1] != *(_DWORD *)&GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data2
          || a2[2] != *(_DWORD *)GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data4
          || a2[3] != *(_DWORD *)&GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2.Data4[4] )
        {
          return 2147500034LL;
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
