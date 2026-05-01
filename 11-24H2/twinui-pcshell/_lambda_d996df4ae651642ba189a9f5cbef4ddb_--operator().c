/*
 * XREFs of _lambda_d996df4ae651642ba189a9f5cbef4ddb_::operator() @ 0x18052A054
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18052EB80 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930_____lambda_1a08449ab0a2814bb2af7204eecc9930___ @ 0x18052962C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a28.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052BF50 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052BF74 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d996df4ae651642ba189a9f5cbef4ddb_::operator()(__int64 *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = *a1;
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v8, a2, a3);
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930_____lambda_1a08449ab0a2814bb2af7204eecc9930___(
         &v9,
         (volatile signed __int32 *)&v8);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  return Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v8);
}
