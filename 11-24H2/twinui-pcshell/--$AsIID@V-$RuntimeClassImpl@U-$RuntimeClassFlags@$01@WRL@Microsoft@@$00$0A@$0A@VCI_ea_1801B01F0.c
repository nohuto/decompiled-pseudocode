/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B01F0
 * Callers:
 *     ??$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E29CC (--$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180222F90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180222F90.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B0358 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r11
  _DWORD *v5; // r10
  _DWORD *v6; // r9
  _DWORD *v7; // rcx
  int CanCastTo; // ebx

  v3 = a1;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  v5 = a2 + 1;
  v6 = a2 + 2;
  v7 = a2 + 3;
  if ( *a2 == -62389853
    && *v5 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && *v6 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && *v7 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    goto LABEL_10;
  }
  if ( *a2 == -428157847
    && *v5 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && *v6 == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && *v7 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *a3 = v3 + 40;
    CanCastTo = 0;
  }
  else
  {
    if ( *a2 == 1834041537
      && *v5 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && *v6 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && *v7 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v3 + 48;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  if ( CanCastTo != -2147467262 )
  {
LABEL_24:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_11;
  }
  v3 += 104LL;
  if ( *a2 != -1049805059
    || *v5 != *(_DWORD *)&GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1.Data2
    || *v6 != *(_DWORD *)GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1.Data4
    || *v7 != *(_DWORD *)&GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1.Data4[4] )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::CanCastTo(v3 + 8);
    goto LABEL_24;
  }
LABEL_10:
  *a3 = v3;
  CanCastTo = 0;
LABEL_11:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
