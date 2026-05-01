/*
 * XREFs of _lambda_665315f8e7a3be3e9382c02473f3b139_::_lambda_665315f8e7a3be3e9382c02473f3b139_ @ 0x18027AD08
 * Callers:
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180723308 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ??0?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV01@@Z @ 0x1807200B0 (--0-$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@.c)
 */

__int64 __fastcall lambda_665315f8e7a3be3e9382c02473f3b139_::_lambda_665315f8e7a3be3e9382c02473f3b139_(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>(
    a1 + 1,
    a3,
    a3,
    a1);
  return v4;
}
