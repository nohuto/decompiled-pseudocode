/*
 * XREFs of ??1SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18066CA70
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18066F820 (-_Destroy@-$_Ref_count_obj2@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x18001A78C (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectedState::~SwitchConnectedState(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectedState *this,
        __int64 a2)
{
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)this + 40,
    a2);
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::~SwitchConnectStateBase((winrt::Windows::Internal::Shell::implementation::SwitchConnectedState *)((char *)this + 8));
}
