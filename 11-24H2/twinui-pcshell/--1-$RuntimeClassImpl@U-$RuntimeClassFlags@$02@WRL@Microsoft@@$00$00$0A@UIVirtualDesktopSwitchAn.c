/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopSwitchAnimator@@UIVirtualDesktopSwitchAnimator2@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801483F0
 * Callers:
 *     ??_E?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x180148420 (--_E-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPosi.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x180379F40 (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIClosable@Foundation@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18037A240 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotificatio.c)
 *     ??_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z @ 0x18037A380 (--_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x180381FB0 (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18038AA50 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x180397C90 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1803AA8E0 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 *     ??_GSearchAppExperienceManagerNotification@@UEAAPEAXI@Z @ 0x1803AAAF0 (--_GSearchAppExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x1803B5988 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803C7C18 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CIconLoaderInternal@@UEAA@XZ @ 0x1804A10B8 (--1CIconLoaderInternal@@UEAA@XZ.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804B8F64 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 *     ??1VirtualDesktopSwitchAnimator@@UEAA@XZ @ 0x1805675E8 (--1VirtualDesktopSwitchAnimator@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180148540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
