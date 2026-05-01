/*
 * XREFs of _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_ @ 0x1803B4838
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_____lambda_89f63c8738b1ad17b99f8ae3b3dcb473___ @ 0x1803AEDD8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89f63c8738b1a.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801CF3E4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)a1,
    a2,
    *(_DWORD *)(a2 + 312) != 0);
  *(_QWORD *)a1 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 336), (const struct winrt::hstring *)(a2 + 336));
  *(_BYTE *)(a1 + 344) = *(_BYTE *)(a2 + 344);
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a2 + 352);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 352));
  *(_BYTE *)(a1 + 360) = *(_BYTE *)(a2 + 360);
  v4 = (_QWORD *)(a2 + 368);
  *(_QWORD *)(a1 + 368) = 0LL;
  if ( a1 + 368 != a2 + 368 )
  {
    *(_QWORD *)(a1 + 368) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 376) = *(_QWORD *)(a2 + 376);
  return a1;
}
