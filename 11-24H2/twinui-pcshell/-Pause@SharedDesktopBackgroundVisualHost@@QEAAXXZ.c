/*
 * XREFs of ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x18060A74C
 * Callers:
 *     ?Pause@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x18060A720 (-Pause@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@I.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18060855C (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1Pause@SharedVisualHostProvider@@QEAA@XZ @ 0x180608CF8 (--1Pause@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@Pause@SharedVisualHostProvider@@QEAAXXZ @ 0x18060AF28 (-StartActivity@Pause@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18060B540 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x18060DB38 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::Pause(SharedDesktopBackgroundVisualHost *this)
{
  _QWORD v2[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v2,
    (__int64)"Pause");
  v2[0] = &SharedVisualHostProvider::Pause::`vftable';
  SharedVisualHostProvider::Pause::StartActivity((SharedVisualHostProvider::Pause *)v2);
  SharedDesktopBackgroundVisualHost::SyncState(this, 8LL);
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  SharedVisualHostProvider::Pause::~Pause((SharedVisualHostProvider::Pause *)v2);
}
