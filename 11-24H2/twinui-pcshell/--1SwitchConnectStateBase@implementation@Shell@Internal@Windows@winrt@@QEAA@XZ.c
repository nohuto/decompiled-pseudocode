/*
 * XREFs of ??1SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18066CA2C
 * Callers:
 *     ??1SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18066CA70 (--1SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18066F830 (-_Destroy@-$_Ref_count_obj2@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::~SwitchConnectStateBase(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *this)
{
  __int64 *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (__int64 *)((char *)this + 24);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  if ( *(_QWORD *)this )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
