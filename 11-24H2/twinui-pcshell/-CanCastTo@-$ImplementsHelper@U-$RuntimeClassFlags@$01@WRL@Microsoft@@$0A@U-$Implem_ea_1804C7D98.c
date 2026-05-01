/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewElementBase@@@Details@23@UISwitchItemGrid@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@UIMultitaskingViewTelemetryHost@@UIScrollableElement@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804C7D98
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UISwitchItemGrid@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@UIMultitaskingViewTelemetryHost@@UIScrollableElement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804C8DA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804C8DA0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIScrollableElement@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804C7D60 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIScrollableElement@@@D.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,ISwitchItemGrid,IObservableObjectArrayChanged,IObservableObjectArrayChangedBeginEnd,IMultitaskingViewTelemetryHost,IScrollableElement>::CanCastTo(
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
  const struct _GUID *v11; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861);
  v6 = 0;
  if ( IsEqualGUID
    || InlineIsEqualGUID(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d)
    || InlineIsEqualGUID(v7, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2)
    || InlineIsEqualGUID(v8, &GUID_434427b5_b731_4e25_88e8_c165bd05b8f4)
    || InlineIsEqualGUID(v9, &GUID_244acd27_00e4_4d5b_95a1_a278d13d8457)
    || InlineIsEqualGUID(v10, &GUID_25a5b310_421f_4a9e_be18_ac8ad18ba2a9) )
  {
    *v4 = v5;
  }
  else
  {
    return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollableElement>::CanCastTo(
                           v5 + 8,
                           v11);
  }
  return v6;
}
