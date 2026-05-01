/*
 * XREFs of ?copy_ref@?$com_ptr@UIUnknown@@@winrt@@AEAAXPEAUIUnknown@@@Z @ 0x1800CF9C4
 * Callers:
 *     ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x1802717E8 (-SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicati.c)
 *     ?SetSite@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x1805C1DB0 (-SetSite@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Initialize@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UIVirtualDesktopManagerInternal@@@6@AEBU?$com_ptr@UIApplicationViewCollection@@@6@@Z @ 0x18066E484 (-Initialize@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU-$com_p.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::com_ptr<IUnknown>::copy_ref(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    if ( *a1 )
      result = winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    *a1 = a2;
    if ( a2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return result;
}
