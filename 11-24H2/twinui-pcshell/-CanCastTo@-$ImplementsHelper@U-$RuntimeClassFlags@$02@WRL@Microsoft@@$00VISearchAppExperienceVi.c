/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@56@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803CE908
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803CCFC4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISh_ea_1803CCFC4.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803CE884 (-CanCastTo@-$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractN.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803CE8D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00VICortanaWNFNotificatio.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int CanCastTo; // eax
  _QWORD *v11; // r8
  __int64 v12; // r9

  v6 = 0;
  if ( InlineIsEqualGUID(a2, &GUID_19864e88_16fe_4208_922f_2e86a377d532) )
  {
    *v4 = v5;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v3, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      *v8 = v9;
    }
    else
    {
      CanCastTo = Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                    v9 + 8,
                    a2);
      if ( CanCastTo < 0 )
      {
        if ( InlineIsEqualGUID(a2, &GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e) )
        {
          *v11 = v12;
          return 0;
        }
        else
        {
          return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
                                 v12 + 8,
                                 a2);
        }
      }
      return (unsigned int)CanCastTo;
    }
    return v6;
  }
}
