/*
 * XREFs of _lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x1800C835C
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800C81FC (--0-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

__int64 __fastcall lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rax
  bool v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rax
  bool v14; // zf

  *(_QWORD *)a1 = 0LL;
  if ( (__int64 *)a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    *(_QWORD *)a1 = v4;
  }
  v5 = *((_DWORD *)a2 + 2);
  v6 = a2 + 2;
  *(_DWORD *)(a1 + 8) = v5;
  v7 = (__int64 *)(a1 + 16);
  *v7 = 0LL;
  if ( v7 != v6 )
  {
    v8 = *v6;
    *v6 = 0LL;
    *v7 = v8;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  v9 = a2 + 3;
  if ( (__int64 *)(a1 + 24) != a2 + 3 )
  {
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)(a1 + 24) = v10;
  }
  v11 = *((_DWORD *)a2 + 16) != 0;
  *(_QWORD *)(a1 + 32) = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 40),
    (struct wil::details::IFailureCallback *)(a1 + 32),
    0LL,
    v11);
  v12 = a1 + 88;
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 88,
    (__int64)(a2 + 11));
  v13 = a2[43];
  a2[43] = 0LL;
  *(_QWORD *)(a1 + 344) = v13;
  if ( v13 )
    v12 = v13 + 8;
  v14 = *((_DWORD *)a2 + 16) == 0;
  *(_QWORD *)(a1 + 80) = v12;
  *(_QWORD *)(a1 + 72) = v12 + 40;
  a2[10] = (__int64)(a2 + 11);
  if ( !v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 5));
  *(_QWORD *)(a1 + 32) = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  return a1;
}
