/*
 * XREFs of ??$make_shared@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@0@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18066C4B8
 * Callers:
 *     ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A9410 (--0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066C92C (--0SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAA@AEBV-$shared_ptr@URe.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchConnectedState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> const &>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // r9
  _QWORD *result; // rax
  __int64 v6; // r10
  _DWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x78uLL);
  *(_OWORD *)v7 = 0LL;
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchConnectedState>::`vftable';
  *((_QWORD *)v7 + 2) = &winrt::Windows::Internal::Shell::implementation::ConnectedState::`vftable';
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchConnectStateBase(v7 + 6, a2);
  *v4 = &winrt::Windows::Internal::Shell::implementation::SwitchConnectedState::`vftable';
  result = a1;
  v4[12] = 0LL;
  *a1 = v4;
  a1[1] = v6;
  return result;
}
