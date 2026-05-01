/*
 * XREFs of ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A9410
 * Callers:
 *     ??$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802A9318 (--$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180669DC4 (--0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make_shared@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@0@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18066C4B8 (--$make_shared@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@AEBV-$shared_p.c)
 *     ??$make_shared@USwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@USwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18066C53C (--$make_shared@USwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA.c)
 *     ??$make_shared@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@@0@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18066C5C0 (--$make_shared@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@AEBV-$shared_.c)
 *     ??$make_shared@USwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@0@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18066C640 (--$make_shared@USwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@AEBV-$sh.c)
 *     ?SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UConnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@URecoveringState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@8@@Z @ 0x180672094 (-SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV-$share.c)
 */

// Hidden C++ exception states: #wind=16
winrt::Windows::Internal::Shell::implementation::ConnectionHandler *__fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler(
        winrt::Windows::Internal::Shell::implementation::ConnectionHandler *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  char *v6; // [rsp+40h] [rbp-49h] BYREF
  std::_Ref_count_base *v7; // [rsp+48h] [rbp-41h]
  __int64 v8; // [rsp+50h] [rbp-39h] BYREF
  std::_Ref_count_base *v9; // [rsp+58h] [rbp-31h]
  __int64 v10; // [rsp+60h] [rbp-29h] BYREF
  std::_Ref_count_base *v11; // [rsp+68h] [rbp-21h]
  __int64 v12; // [rsp+70h] [rbp-19h] BYREF
  std::_Ref_count_base *v13; // [rsp+78h] [rbp-11h]
  __int64 v14; // [rsp+80h] [rbp-9h] BYREF
  std::_Ref_count_base *v15; // [rsp+88h] [rbp-1h]
  std::_Ref_count_base *v16[2]; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v17[8]; // [rsp+A0h] [rbp+17h] BYREF
  std::_Ref_count_base *v18; // [rsp+A8h] [rbp+1Fh]
  __int128 v19; // [rsp+B0h] [rbp+27h]
  _DWORD *v20; // [rsp+100h] [rbp+77h]

  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ConnectionHandler(a1);
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *(_QWORD *)a1 = &winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::`vftable';
  std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchConnectedState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> const &>(
    (char *)a1 + 88,
    a2);
  std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchUserInputNeededState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> const &>(
    (char *)a1 + 104,
    a2);
  std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchRecoveringState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> const &>(
    (char *)a1 + 120,
    a2);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>((_QWORD *)a1 + 17, a2);
  *((_QWORD *)a1 + 19) = 0LL;
  *((_QWORD *)a1 + 20) = 0LL;
  *((_QWORD *)a1 + 21) = 0LL;
  *(_OWORD *)v16 = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v14, (_QWORD *)a1 + 15);
  v4 = std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState,>(v17);
  v8 = *(_QWORD *)v4;
  v9 = *(std::_Ref_count_base **)(v4 + 8);
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v12, (_QWORD *)a1 + 11);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v10, (_QWORD *)a1 + 13);
  v20 = operator new(0x18uLL);
  *(_OWORD *)v20 = 0LL;
  v20[2] = 1;
  v20[3] = 1;
  *(_QWORD *)v20 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectingState>::`vftable';
  *((_QWORD *)v20 + 2) = &winrt::Windows::Internal::Shell::implementation::SwitchConnectingState::`vftable';
  v6 = (char *)(v20 + 4);
  v7 = (std::_Ref_count_base *)v20;
  v19 = 0LL;
  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::SetStateHandler(
    (_DWORD)a1,
    (unsigned int)&v6,
    (unsigned int)&v10,
    (unsigned int)&v12,
    (__int64)&v8,
    (__int64)&v14,
    (__int64)v16);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v16[1] )
    std::_Ref_count_base::_Decref(v16[1]);
  return a1;
}
