/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIProcessLockScreenEvent@ContentManagement@@UIProcessStartMenuEvent@5@UIProcessContextualSuggestionsEvent@5@UILayoutResolver@5@UILockScreenRegistrySettingProvider@5@UITaskBarAppProperties@5@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180042F20
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180040B6C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPro.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033CD8 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r11

  if ( InlineIsEqualGUID(a2, &GUID_30edbf80_0d30_4f30_a533_63ab65344500) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5)
      || InlineIsEqualGUID(v6, &GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4)
      || InlineIsEqualGUID(v10, &GUID_7388c211_2265_4968_9ad8_ac1df1d7a3a1)
      || InlineIsEqualGUID(v11, &GUID_666aed77_8284_49e0_bbe2_7f593622c839) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v12, &GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d) )
    {
      *v13 = v14 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
