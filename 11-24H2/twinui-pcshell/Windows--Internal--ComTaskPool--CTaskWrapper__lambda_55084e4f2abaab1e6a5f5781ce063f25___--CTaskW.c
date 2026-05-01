/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25_____lambda_55084e4f2abaab1e6a5f5781ce063f25___ @ 0x18044596C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___ @ 0x180446DC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180195C9C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_180195C9C.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25_____lambda_55084e4f2abaab1e6a5f5781ce063f25___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = &off_180741518;
  return a1;
}
