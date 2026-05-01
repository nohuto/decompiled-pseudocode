/*
 * XREFs of ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800246F4
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180021B40 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x180064820 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     _lambda_279b59b1da187398d137b7ca9bd87eac_::operator() @ 0x1800AA55C (_lambda_279b59b1da187398d137b7ca9bd87eac_--operator().c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A090 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041B3B0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180430D60 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     _lambda_872651ef2fbed137a92f03ff9b7f61da_::operator() @ 0x18043DFB4 (_lambda_872651ef2fbed137a92f03ff9b7f61da_--operator().c)
 *     _lambda_9a3222de221babd8ed80f71b88aa5d08_::operator() @ 0x18043E2C8 (_lambda_9a3222de221babd8ed80f71b88aa5d08_--operator().c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::operator() @ 0x1804494C8 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--operator().c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::operator() @ 0x180449A4C (_lambda_79917a46c0d9777cd1553539ded46aa9_--operator().c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180025228 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E3E94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18029644C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rax
  int v6; // esi
  const struct wil::FailureInfo *v7; // rdx
  int v8; // esi
  const struct _tlgProvider_t *v9; // rax
  int v10; // ebx
  _BYTE v11[192]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v12; // [rsp+110h] [rbp+67h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp+77h] BYREF
  __int64 v14; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v4 )
  {
    v4 += 33;
    AcquireSRWLockExclusive(v4);
    v12 = 0LL;
  }
  else
  {
    SRWLock = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 272);
  v6 = *(_DWORD *)(v5 + 248);
  if ( v6 < 1 )
  {
    memset_0(v11, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v11, v7);
  }
  if ( *(int *)(v5 + 72) >= 0 )
    *(_DWORD *)(v5 + 72) = a2;
  v8 = v6 - 1;
  *(_DWORD *)(v5 + 248) = v8;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v8 )
  {
    v9 = ViewManagerInteropLogging::Provider();
    v10 = (int)v9;
    if ( *(_DWORD *)v9 > 5u )
    {
      LODWORD(v12) = GetCurrentThreadId();
      LODWORD(SRWLock) = a2;
      v14 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (unsigned int)&unk_1807E0E76,
        *(_DWORD *)(a1 + 272) + 8,
        0,
        (__int64)&v14,
        (__int64)&SRWLock,
        (__int64)&v12);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
}
