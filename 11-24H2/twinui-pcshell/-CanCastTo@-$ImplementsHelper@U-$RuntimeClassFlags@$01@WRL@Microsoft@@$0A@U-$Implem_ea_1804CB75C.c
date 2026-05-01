/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewElementBase@@@Details@23@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804CB75C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CC330 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804CC330.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  BOOL IsEqualGUID; // eax
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  unsigned int v6; // r9d
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r11

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861);
  v6 = 0;
  if ( IsEqualGUID
    || InlineIsEqualGUID(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d)
    || InlineIsEqualGUID(v7, &GUID_71010444_c43d_42d5_9471_ce086b656008)
    || InlineIsEqualGUID(v8, &GUID_dcaa9d90_42a2_4083_8bd0_8a0e0e4f25d0)
    || InlineIsEqualGUID(v9, &GUID_e56c8688_a8ea_46fe_8453_96d5bb0a2c84)
    || InlineIsEqualGUID(v10, &GUID_0d454c8b_6028_4333_bd79_2d890a330063) )
  {
    *v4 = v5;
  }
  else if ( InlineIsEqualGUID(v11, &GUID_b107f728_7eab_437b_88d4_ba12e7dfa796) )
  {
    *v12 = v13 + 8;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v6;
}
