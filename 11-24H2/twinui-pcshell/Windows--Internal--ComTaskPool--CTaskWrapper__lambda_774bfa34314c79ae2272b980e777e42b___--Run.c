/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_774bfa34314c79ae2272b980e777e42b___::Run @ 0x18044B800
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAVClientUwpWindowReadyForPresentationEventArgs@@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAVClientUwpWindowReadyForPresentationEventArgs@@@Z @ 0x18003BB64 (--$InvokeAll@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAVClientUwpWind.c)
 *     ??$MakeOrThrow@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientUwpWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x18009D818 (--$MakeOrThrow@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientUw.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_774bfa34314c79ae2272b980e777e42b___::Run(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  wil::MakeOrThrow<ClientUwpWindowReadyForPresentationEventArgs,bool const &>(&v6, (char *)(a1 + 32));
  result = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,ClientUwpWindowReadyForPresentationEventArgs *>(
             (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 152LL),
             *(_QWORD *)(a1 + 24),
             v6);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAF9,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)result,
      v4);
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
