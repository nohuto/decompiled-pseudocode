/*
 * XREFs of ?add_ProcessDestroyed@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180660DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x180660DA8 (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::add_ProcessDestroyed(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  PVOID v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 80;
  if ( !a1 )
    v5 = 96LL;
  winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::add((RTL_SRWLOCK *)v5, &v7, &v8);
  *a3 = v7;
  return 0LL;
}
