/*
 * XREFs of ?attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1802163C0
 * Callers:
 *     ??0?$vector@UPointerPoint@Input@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UPointerPoint@Input@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1802CA3D0 (--0-$vector@UPointerPoint@Input@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU-$IVector@UPointerPoint.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 *     ?CreateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@@impl@winrt@@UEAAHPEAX0PEAPEAX1@Z @ 0x1805B8E00 (-CreateInstance@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@I.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180600D50 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

void __fastcall winrt::attach_abi(winrt *this, struct IUnknown *a2, void *a3)
{
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this);
  *winrt::put_abi(this, a2) = a2;
}
