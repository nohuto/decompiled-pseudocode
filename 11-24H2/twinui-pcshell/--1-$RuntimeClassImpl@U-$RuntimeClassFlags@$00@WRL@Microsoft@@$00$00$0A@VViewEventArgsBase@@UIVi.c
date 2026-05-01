/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18014817C
 * Callers:
 *     ??_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z @ 0x1801482A0 (--_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForNavigationRequest@@UEAAPEAXI@Z @ 0x1801482E0 (--_GViewEventArgsForNavigationRequest@@UEAAPEAXI@Z.c)
 *     ??1ViewEventArgsForPropertyChanged@@UEAA@XZ @ 0x1801E621C (--1ViewEventArgsForPropertyChanged@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1802CF4FC (--1-$RuntimeClass@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shel.c)
 *     ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x180407EC0 (--1ViewHostItemPropertyChangedArgs@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180408190 (--_G-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Interna.c)
 *     ??1ViewEventArgsForSwitch@@UEAA@XZ @ 0x180418C18 (--1ViewEventArgsForSwitch@@UEAA@XZ.c)
 *     ??1ViewEventArgsForWindowingSettings@@UEAA@XZ @ 0x180418C50 (--1ViewEventArgsForWindowingSettings@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180148540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>(
        ViewEventArgsBase *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v2);
  ViewEventArgsBase::~ViewEventArgsBase(this);
}
