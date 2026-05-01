/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180181530
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180517780 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180517780.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180517790 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180517790.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805177A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1805177A0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805177B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1805177B0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<ITabletModePositionerManagerPriv,ITabletModePositionerManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWindowManagementShowMoveSizeEvents>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // rcx

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_22;
    }
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = a1 + 24;
      v4 = 0;
    }
    else
    {
      if ( *a2 == 1834041537
        && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = a1 + 32;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 == -2147467262 )
        v4 = -2147467262;
    }
    if ( v4 != -2147467262 )
      goto LABEL_21;
    v5 = a1 + 88;
    if ( *a2 == 537924140 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_2010122c_468a_480f_8cd1_b85e76f5882e.Data2
        && a2[2] == *(_DWORD *)GUID_2010122c_468a_480f_8cd1_b85e76f5882e.Data4 )
      {
        v6 = *(_DWORD *)&GUID_2010122c_468a_480f_8cd1_b85e76f5882e.Data4[4];
        goto LABEL_18;
      }
    }
    else if ( *a2 == 95180454
           && a2[1] == *(_DWORD *)&GUID_05ac56a6_baf7_414f_b92c_7156052701de.Data2
           && a2[2] == *(_DWORD *)GUID_05ac56a6_baf7_414f_b92c_7156052701de.Data4 )
    {
      v6 = *(_DWORD *)&GUID_05ac56a6_baf7_414f_b92c_7156052701de.Data4[4];
LABEL_18:
      if ( a2[3] == v6 )
      {
        *a3 = v5;
LABEL_20:
        v4 = 0;
        goto LABEL_21;
      }
    }
    v8 = v5 + 8;
    if ( *a2 == 1222485622
      && a2[1] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data2
      && a2[2] == *(_DWORD *)GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4
      && a2[3] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4[4] )
    {
      *a3 = v8;
      goto LABEL_20;
    }
    v4 = -2147467262;
LABEL_21:
    if ( v4 < 0 )
      return (unsigned int)v4;
LABEL_22:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0;
}
