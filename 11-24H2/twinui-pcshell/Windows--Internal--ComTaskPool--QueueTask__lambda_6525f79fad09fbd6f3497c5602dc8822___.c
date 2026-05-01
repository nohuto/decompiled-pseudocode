/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6525f79fad09fbd6f3497c5602dc8822___ @ 0x1802C6DC8
 * Callers:
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802C6D78 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6525f79fad09fbd6f3497c5602dc8822_____lambda_6525f79fad09fbd6f3497c5602dc8822___ @ 0x180382DC0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6525f79fad09f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_6525f79fad09fbd6f3497c5602dc8822___()
{
  __int64 *v0; // rax
  __int64 v1; // rbx
  volatile signed __int32 *v2; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // edi
  volatile signed __int32 *v6; // [rsp+50h] [rbp+18h] BYREF

  v0 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6525f79fad09fbd6f3497c5602dc8822_____lambda_6525f79fad09fbd6f3497c5602dc8822___(&v6);
  v1 = *v0;
  *v0 = 0LL;
  v2 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v2);
  }
  CurrentThreadId = GetCurrentThreadId();
  v4 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v4;
}
