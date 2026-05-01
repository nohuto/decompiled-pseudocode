/*
 * XREFs of ?add_InstanceShutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1805B4990
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1801E95CC (-add@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::add_InstanceShutdown(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 64;
  if ( !a1 )
    v5 = 80LL;
  winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::add(v5, (__int64)&v7, &v8);
  *a3 = v7;
  return 0LL;
}
