/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801480F8
 * Callers:
 *     ??_ESnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x180148260 (--_ESnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18037A200 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewEventArg@Experie.c)
 *     _SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::_scalar_deleting_destructor_ @ 0x18037A300 (_SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--_scalar_deleting.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg::_scalar_deleting_destructor_ @ 0x18037A340 (_TwinUI--Cortana--ShellExperienceView--_FireViewChanged_--_2_--ShellExperienceViewChangedArg--_s.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x18038C254 (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_ShellExperienceViewEventArg @ 0x1803C592C (_TwinUI--Cortana--ShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEventArg--_Shell.c)
 *     ??_GVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180419530 (--_GVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAA@XZ @ 0x180489A80 (--1-$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V-$V.c)
 *     ??1AppViewIconFactory@@UEAA@XZ @ 0x1805874CC (--1AppViewIconFactory@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180148540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
