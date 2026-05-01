/*
 * XREFs of ?add@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@2@@Z @ 0x18026F6F0
 * Callers:
 *     ?add_WindowSnapEvent@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180589460 (-add_WindowSnapEvent@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 * Callees:
 *     ??$make_agile_delegate@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@1@AEBU2341@@Z @ 0x18020AE38 (--$make_agile_delegate@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@wi.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x1803D4EE8 (-add_agile@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foun.c)
 */

__int64 __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>>::add(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::add_agile(
    a1,
    a2,
    v5);
  return a2;
}
