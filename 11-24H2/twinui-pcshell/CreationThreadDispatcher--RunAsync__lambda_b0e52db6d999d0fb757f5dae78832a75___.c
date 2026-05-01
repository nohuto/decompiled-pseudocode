/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_b0e52db6d999d0fb757f5dae78832a75___ @ 0x1803A1648
 * Callers:
 *     _lambda_98ed18d7548b7f9dea34b7206077feb8_::operator() @ 0x1803A1DC4 (_lambda_98ed18d7548b7f9dea34b7206077feb8_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ae0cadd183be7833c0f4a4ceaa10ed75_____lambda_ae0cadd183be7833c0f4a4ceaa10ed75___ @ 0x1803A1394 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ae0cadd183be7.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_b0e52db6d999d0fb757f5dae78832a75___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  volatile int *v4; // rdx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-10h] BYREF
  volatile signed __int32 *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, a2);
  v10 = v2;
  v11[0] = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v11, v4);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ae0cadd183be7833c0f4a4ceaa10ed75_____lambda_ae0cadd183be7833c0f4a4ceaa10ed75___(
         &v12,
         &v10);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
