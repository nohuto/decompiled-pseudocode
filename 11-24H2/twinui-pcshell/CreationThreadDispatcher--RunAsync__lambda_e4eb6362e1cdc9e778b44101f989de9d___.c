/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_e4eb6362e1cdc9e778b44101f989de9d___ @ 0x180342C8C
 * Callers:
 *     ?UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801EE79C (-UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a437ff59390a72614abce5a0545024f_____lambda_8a437ff59390a72614abce5a0545024f___ @ 0x180342338 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8a437ff59390a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_e4eb6362e1cdc9e778b44101f989de9d___(
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
  volatile signed __int32 *v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF

  v13 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, a2);
  v11 = v2;
  v12 = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, v4);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a437ff59390a72614abce5a0545024f_____lambda_8a437ff59390a72614abce5a0545024f___(
         &v10,
         &v11);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
