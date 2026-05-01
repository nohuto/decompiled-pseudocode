/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@89Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18036D5D4
 * Callers:
 *     ?GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18036DDC0 (-GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::FillArrayWithIid(
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
  __int64 result; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_df65db57_d504_456e_8bd7_004ce308d8d9;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_dec04b18_357e_41d8_9b71_b991243bea34;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef;
  v10 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v10) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  v11 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v11) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  v12 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v12) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  v13 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v13) = _uuidof__AUIDisposable_Platform__;
  *(GUID *)(a3 + 16LL * v3) = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
  result = v3 + 1;
  *a2 = result;
  return result;
}
