/*
 * XREFs of ??0SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066C92C
 * Callers:
 *     ??$make_shared@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@0@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18066C4B8 (--$make_shared@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@AEBV-$shared_p.c)
 *     ??$make_shared@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@@0@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18066C5C0 (--$make_shared@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@AEBV-$shared_.c)
 *     ??$make_shared@USwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@0@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18066C640 (--$make_shared@USwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@AEBV-$sh.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchConnectStateBase(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  *a1 = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a1 + 1, a2);
  *(_QWORD *)(v2 + 24) = 0LL;
  return v2;
}
