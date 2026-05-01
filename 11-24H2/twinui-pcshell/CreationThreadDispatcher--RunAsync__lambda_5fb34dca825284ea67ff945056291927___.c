/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x180511244
 * Callers:
 *     wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::operator() @ 0x180512010 (wistd--__function--__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_-)_-.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0_____lambda_fd0439dc359abe078b4c08f0b3a8cea0___ @ 0x180510EB0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd0439dc359ab.c)
 *     _lambda_fd0439dc359abe078b4c08f0b3a8cea0_::__lambda_fd0439dc359abe078b4c08f0b3a8cea0_ @ 0x180511650 (_lambda_fd0439dc359abe078b4c08f0b3a8cea0_--__lambda_fd0439dc359abe078b4c08f0b3a8cea0_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // r8
  __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r9
  volatile int *v6; // rdx
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  unsigned int v10; // edi
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp+20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v16 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v16, a2);
  v12[0] = *(_QWORD *)v2;
  v3 = (__int64 *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = 0LL;
  v12[1] = v4;
  v13 = *(_BYTE *)(v2 + 16);
  v14 = v5;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v14, v6);
  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0_____lambda_fd0439dc359abe078b4c08f0b3a8cea0___(
         &v15,
         (__int64)v12);
  v8 = *v7;
  *v7 = 0LL;
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
  }
  v10 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  lambda_fd0439dc359abe078b4c08f0b3a8cea0_::__lambda_fd0439dc359abe078b4c08f0b3a8cea0_(v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v3);
  return v10;
}
