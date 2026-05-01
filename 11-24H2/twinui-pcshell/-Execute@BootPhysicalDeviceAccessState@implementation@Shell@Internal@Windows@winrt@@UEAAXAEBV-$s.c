/*
 * XREFs of ?Execute@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::BootPhysicalDeviceAccessState::Execute(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = (unsigned int)a3;
  if ( (_DWORD)a3 )
  {
    v3 = (unsigned int)(a3 - 1);
    if ( (_DWORD)a3 != 1 )
    {
      v3 = (unsigned int)(a3 - 2);
      if ( (_DWORD)a3 != 2 )
      {
        v3 = (unsigned int)(a3 - 3);
        if ( (_DWORD)a3 != 3 && (_DWORD)a3 != 99 )
          winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(
            v3,
            (unsigned int)a3,
            98LL);
      }
    }
  }
  return winrt::Windows::Internal::Shell::implementation::BootPhysicalDeviceAccessState::ShowPhysicalDeviceAccessTransitionScreen(
           v3,
           a2,
           a3,
           (unsigned int)a3);
}
