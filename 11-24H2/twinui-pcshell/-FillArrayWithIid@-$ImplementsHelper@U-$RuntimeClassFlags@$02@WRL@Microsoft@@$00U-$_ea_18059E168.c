/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18059E168
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18059EA10 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18059EA10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_1da3501e_cf8d_5263_a3c5_7f0e104a514a;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6;
  v10 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v10) = GUID_af45af48_c813_4b64_943d_73f6be1b9fdc;
  v11 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v11) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  v12 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v12) = GUID_0b40e4e6_2749_461f_9a84_29491c297f86;
  v13 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v13) = GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c;
  v14 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v14) = GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc;
  v15 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v15) = GUID_99a79705_bfc0_4c43_be58_a929322ee203;
  *(GUID *)(a3 + 16LL * v3) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  result = v3 + 1;
  *a2 = result;
  return result;
}
