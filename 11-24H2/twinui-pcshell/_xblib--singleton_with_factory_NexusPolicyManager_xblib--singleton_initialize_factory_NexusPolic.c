/*
 * XREFs of _xblib::singleton_with_factory_NexusPolicyManager_xblib::singleton_initialize_factory_NexusPolicyManager___::Instance_::_1_::dtor$1 @ 0x1806E2BB7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801910F0 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall xblib::singleton_with_factory_NexusPolicyManager_xblib::singleton_initialize_factory_NexusPolicyManager___::Instance_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(*(_QWORD *)(a2 + 56));
  }
}
