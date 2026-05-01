/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A1644
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A0E8C (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v5; // eax
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( *a2 == -1350114592 && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
  {
    if ( a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_17;
    }
  }
  a1 += 8LL;
  if ( *a2 == -1796592748 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
    {
      v5 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
      goto LABEL_16;
    }
LABEL_25:
    a1 += 32LL;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      goto LABEL_17;
    }
    v7 = a1 + 8;
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = v7;
LABEL_45:
      v6 = 0;
      goto LABEL_46;
    }
    v8 = a1 + 48;
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = v8;
      v6 = 0;
    }
    else
    {
      if ( *a2 == 1834041537
        && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = v7 + 48;
        v6 = 0;
      }
      else
      {
        v6 = -2147467262;
      }
      if ( v6 == -2147467262 )
        v6 = -2147467262;
    }
    if ( v6 == -2147467262 )
    {
      v9 = v7 + 104;
      if ( *a2 == -1083991649
        && a2[1] == *(_DWORD *)&GUID_bf63999f_7411_40da_861c_df72c0ffee84.Data2
        && a2[2] == *(_DWORD *)GUID_bf63999f_7411_40da_861c_df72c0ffee84.Data4
        && a2[3] == *(_DWORD *)&GUID_bf63999f_7411_40da_861c_df72c0ffee84.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 112;
      if ( *a2 == 1260763374
        && a2[1] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
        && a2[2] == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
        && a2[3] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 120;
      if ( *a2 == -1547552073
        && a2[1] == *(_DWORD *)&GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a.Data2
        && a2[2] == *(_DWORD *)GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a.Data4
        && a2[3] == *(_DWORD *)&GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 128;
      if ( *a2 == 1790111974
        && a2[1] == *(_DWORD *)&GUID_6ab2f0e6_cf78_4445_80dd_201879cf4c70.Data2
        && a2[2] == *(_DWORD *)GUID_6ab2f0e6_cf78_4445_80dd_201879cf4c70.Data4
        && a2[3] == *(_DWORD *)&GUID_6ab2f0e6_cf78_4445_80dd_201879cf4c70.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 136;
      if ( *a2 == -412926760
        && a2[1] == *(_DWORD *)&GUID_e7633cd8_733a_4843_9c69_47318c4a8b98.Data2
        && a2[2] == *(_DWORD *)GUID_e7633cd8_733a_4843_9c69_47318c4a8b98.Data4
        && a2[3] == *(_DWORD *)&GUID_e7633cd8_733a_4843_9c69_47318c4a8b98.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 144;
      if ( *a2 == 1601558082
        && a2[1] == *(_DWORD *)&GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee.Data2
        && a2[2] == *(_DWORD *)GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee.Data4
        && a2[3] == *(_DWORD *)&GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 152;
      if ( *a2 == -1623477830
        && a2[1] == *(_DWORD *)&GUID_9f3bb1ba_6ccb_4dd0_98b0_ccfa58c0ffee.Data2
        && a2[2] == *(_DWORD *)GUID_9f3bb1ba_6ccb_4dd0_98b0_ccfa58c0ffee.Data4
        && a2[3] == *(_DWORD *)&GUID_9f3bb1ba_6ccb_4dd0_98b0_ccfa58c0ffee.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 160;
      if ( *a2 == -1811144131
        && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 168;
      if ( *a2 == -1735987280
        && a2[1] == *(_DWORD *)&GUID_9886efb0_afb3_4a35_b381_329935b32d5a.Data2
        && a2[2] == *(_DWORD *)GUID_9886efb0_afb3_4a35_b381_329935b32d5a.Data4
        && a2[3] == *(_DWORD *)&GUID_9886efb0_afb3_4a35_b381_329935b32d5a.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 176;
      if ( *a2 == 2019606680
        && a2[1] == *(_DWORD *)&GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data2
        && a2[2] == *(_DWORD *)GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data4
        && a2[3] == *(_DWORD *)&GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 184;
      if ( *a2 == 1953917369
        && a2[1] == *(_DWORD *)&GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data2
        && a2[2] == *(_DWORD *)GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data4
        && a2[3] == *(_DWORD *)&GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 192;
      if ( *a2 == -1670074043
        && a2[1] == *(_DWORD *)&GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data2
        && a2[2] == *(_DWORD *)GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data4
        && a2[3] == *(_DWORD *)&GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 200;
      if ( *a2 == 595331017
        && a2[1] == *(_DWORD *)&GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f.Data2
        && a2[2] == *(_DWORD *)GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f.Data4
        && a2[3] == *(_DWORD *)&GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 208;
      if ( *a2 == -1354703333
        && a2[1] == *(_DWORD *)&GUID_af40de1b_7663_429e_9fee_6029ee6c4978.Data2
        && a2[2] == *(_DWORD *)GUID_af40de1b_7663_429e_9fee_6029ee6c4978.Data4
        && a2[3] == *(_DWORD *)&GUID_af40de1b_7663_429e_9fee_6029ee6c4978.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 216;
      if ( *a2 == -1219107104
        && a2[1] == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data2
        && a2[2] == *(_DWORD *)GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4
        && a2[3] == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 224;
      if ( *a2 == -1738762077
        && a2[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
        && a2[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
        && a2[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 232;
      if ( *a2 == 706974600
        && a2[1] == *(_DWORD *)&GUID_2a239388_fc85_4077_981e_9e4205cf9451.Data2
        && a2[2] == *(_DWORD *)GUID_2a239388_fc85_4077_981e_9e4205cf9451.Data4
        && a2[3] == *(_DWORD *)&GUID_2a239388_fc85_4077_981e_9e4205cf9451.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 240;
      if ( *a2 == -2093810708
        && a2[1] == *(_DWORD *)&GUID_8332fbec_5803_4461_be72_91b106e7af8a.Data2
        && a2[2] == *(_DWORD *)GUID_8332fbec_5803_4461_be72_91b106e7af8a.Data4
        && a2[3] == *(_DWORD *)&GUID_8332fbec_5803_4461_be72_91b106e7af8a.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 248;
      if ( *a2 == -1506570009
        && a2[1] == *(_DWORD *)&GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data2
        && a2[2] == *(_DWORD *)GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data4
        && a2[3] == *(_DWORD *)&GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 256;
      if ( *a2 == 924729926
        && a2[1] == *(_DWORD *)&GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data2
        && a2[2] == *(_DWORD *)GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data4
        && a2[3] == *(_DWORD *)&GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data4[4] )
      {
        goto LABEL_44;
      }
      v9 = v7 + 264;
      if ( *a2 == 1091856950
        && a2[1] == *(_DWORD *)&GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data2
        && a2[2] == *(_DWORD *)GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data4
        && a2[3] == *(_DWORD *)&GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data4[4] )
      {
        goto LABEL_44;
      }
      if ( (v9 = v7 + 272, *a2 == -1211751484)
        && a2[1] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
        && a2[2] == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
        && a2[3] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4]
        || (v9 = v7 + 280, *a2 == 261971833)
        && a2[1] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data2
        && a2[2] == *(_DWORD *)GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4
        && a2[3] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4[4]
        || (v9 = v7 + 288, *a2 == 2002484756)
        && a2[1] == *(_DWORD *)&GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data2
        && a2[2] == *(_DWORD *)GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data4
        && a2[3] == *(_DWORD *)&GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data4[4]
        || (v9 = v7 + 296, *a2 == -814696900)
        && a2[1] == *(_DWORD *)&GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data2
        && a2[2] == *(_DWORD *)GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data4
        && a2[3] == *(_DWORD *)&GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data4[4]
        || (v9 = v7 + 304, *a2 == -1224286739)
        && a2[1] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data2
        && a2[2] == *(_DWORD *)GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4
        && a2[3] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4[4]
        || (v9 = v7 + 312, *a2 == -615847089)
        && a2[1] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data2
        && a2[2] == *(_DWORD *)GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4
        && a2[3] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4[4]
        || (v9 = v7 + 320, *a2 == 1222485622)
        && a2[1] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data2
        && a2[2] == *(_DWORD *)GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4
        && a2[3] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4[4] )
      {
LABEL_44:
        *a3 = v9;
        goto LABEL_45;
      }
      v6 = -2147467262;
    }
LABEL_46:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_18;
  }
  if ( *a2 != 3
    || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
  {
    goto LABEL_25;
  }
  v5 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
LABEL_16:
  if ( a2[3] != v5 )
    goto LABEL_25;
LABEL_17:
  *a3 = a1;
  v6 = 0;
LABEL_18:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
