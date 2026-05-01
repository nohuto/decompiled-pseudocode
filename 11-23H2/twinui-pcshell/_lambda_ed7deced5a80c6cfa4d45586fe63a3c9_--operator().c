/*
 * XREFs of _lambda_ed7deced5a80c6cfa4d45586fe63a3c9_::operator() @ 0x1801F91C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::Run @ 0x1801F9C60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___--Run.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800463D0 (--$InvokeDelegates@V_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800E15CC (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientUwpWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x18016A650 (--$MakeOrThrow@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientUw.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_ed7deced5a80c6cfa4d45586fe63a3c9_::operator()(char *a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  volatile signed __int32 *v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF
  RTL_SRWLOCK *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  wil::MakeOrThrow<ClientUwpWindowReadyForPresentationEventArgs,bool const &>(&v10, a1 + 16);
  v2 = *(_QWORD *)a1;
  v6 = v10;
  v12 = *((_QWORD *)a1 + 1);
  v3 = 0;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v2 + 160, (__int64)&v11);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
    (__int64 *)&v9,
    (volatile int *)(v2 + 152));
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  if ( v9 )
  {
    v7[0] = &v12;
    v7[1] = &v6;
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_183e354435f860d04c2ca8d3ac2ebf61_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
           v7,
           (__int64)v9,
           v2 + 152);
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v9);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAFA,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v6);
  v4 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
