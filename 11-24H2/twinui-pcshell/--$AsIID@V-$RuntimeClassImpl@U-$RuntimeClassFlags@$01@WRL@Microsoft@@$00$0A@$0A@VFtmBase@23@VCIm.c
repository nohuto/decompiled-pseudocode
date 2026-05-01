/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180113F28
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180113CBC (--$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // eax
  int v5; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        goto LABEL_20;
      }
      v4 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *a2 != 3
        || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        goto LABEL_20;
      }
      v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( a2[3] == v4 )
    {
      *a3 = a1;
      v5 = 0;
LABEL_13:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v5;
    }
LABEL_20:
    v7 = a1 + 32;
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = v7;
LABEL_37:
      v5 = 0;
      goto LABEL_38;
    }
    v8 = a1 + 72;
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = v8;
      v5 = 0;
    }
    else
    {
      if ( *a2 == 1834041537
        && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = v7 + 48;
        v5 = 0;
      }
      else
      {
        v5 = -2147467262;
      }
      if ( v5 == -2147467262 )
        v5 = -2147467262;
    }
    if ( v5 != -2147467262 )
    {
LABEL_38:
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_13;
    }
    if ( *a2 == 1384385691 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_52840c9b_dbca_427b_94cd_6989ee80a480.Data2
        && a2[2] == *(_DWORD *)GUID_52840c9b_dbca_427b_94cd_6989ee80a480.Data4 )
      {
        v9 = *(_DWORD *)&GUID_52840c9b_dbca_427b_94cd_6989ee80a480.Data4[4];
        goto LABEL_35;
      }
    }
    else if ( *a2 == 406963927
           && a2[1] == *(_DWORD *)&GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5.Data2
           && a2[2] == *(_DWORD *)GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5.Data4 )
    {
      v9 = *(_DWORD *)&GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5.Data4[4];
LABEL_35:
      if ( a2[3] == v9 )
      {
        *a3 = v7 + 104;
        goto LABEL_37;
      }
    }
    if ( *a2 == 184376270
      && a2[1] == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data2
      && a2[2] == *(_DWORD *)GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4
      && a2[3] == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4[4] )
    {
      *a3 = v7 + 112;
      goto LABEL_37;
    }
    v10 = v7 + 120;
    if ( *a2 == -520195196
      && a2[1] == *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data2
      && a2[2] == *(_DWORD *)GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4
      && a2[3] == *(_DWORD *)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779.Data4[4]
      || (v10 = v7 + 128, *a2 == 1830563296)
      && a2[1] == *(_DWORD *)&GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data2
      && a2[2] == *(_DWORD *)GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data4
      && a2[3] == *(_DWORD *)&GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88.Data4[4]
      || (v10 = v7 + 136, *a2 == 794127247)
      && a2[1] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data2
      && a2[2] == *(_DWORD *)GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4
      && a2[3] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4[4]
      || (v10 = v7 + 144, *a2 == 751684338)
      && a2[1] == *(_DWORD *)&GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data2
      && a2[2] == *(_DWORD *)GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data4
      && a2[3] == *(_DWORD *)&GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data4[4]
      || (v10 = v7 + 152, *a2 == 927980921)
      && a2[1] == *(_DWORD *)&GUID_374fdd79_cca2_4be4_a49d_0508c29743bc.Data2
      && a2[2] == *(_DWORD *)GUID_374fdd79_cca2_4be4_a49d_0508c29743bc.Data4
      && a2[3] == *(_DWORD *)&GUID_374fdd79_cca2_4be4_a49d_0508c29743bc.Data4[4]
      || (v10 = v7 + 160, *a2 == -563181053)
      && a2[1] == *(_DWORD *)&GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6.Data2
      && a2[2] == *(_DWORD *)GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6.Data4
      && a2[3] == *(_DWORD *)&GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6.Data4[4] )
    {
      *a3 = v10;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 == -2147467262 )
      v5 = -2147467262;
    goto LABEL_38;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
