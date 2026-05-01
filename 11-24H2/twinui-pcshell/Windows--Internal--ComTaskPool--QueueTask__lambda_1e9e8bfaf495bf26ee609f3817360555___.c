/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1e9e8bfaf495bf26ee609f3817360555___ @ 0x180308740
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_8e00e1fbf2ed311989c78bcff33a5f22___ @ 0x180308B4C (CIAMGlobals--QueueViewManagementTask__lambda_8e00e1fbf2ed311989c78bcff33a5f22___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e9e8bfaf495bf26ee609f3817360555_____lambda_1e9e8bfaf495bf26ee609f3817360555___ @ 0x1803081E8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1e9e8bfaf495b.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1e9e8bfaf495bf26ee609f3817360555___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        volatile signed __int32 *a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e9e8bfaf495bf26ee609f3817360555_____lambda_1e9e8bfaf495bf26ee609f3817360555___(
         &v10,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
