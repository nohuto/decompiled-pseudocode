/*
 * XREFs of ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x180205320
 * Callers:
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180036630 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x18022CA10 (-OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z.c)
 *     ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x180304020 (-OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c561e33f7b9b6a5cc88742f5f6590796___ @ 0x180301074 (Windows--Internal--ComTaskPool--QueueTask__lambda_c561e33f7b9b6a5cc88742f5f6590796___.c)
 *     _lambda_c561e33f7b9b6a5cc88742f5f6590796_::__lambda_c561e33f7b9b6a5cc88742f5f6590796_ @ 0x180301464 (_lambda_c561e33f7b9b6a5cc88742f5f6590796_--__lambda_c561e33f7b9b6a5cc88742f5f6590796_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_QueuePresentationChangeNotification(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  int v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 728);
  if ( v4 )
  {
    v12 = *(_QWORD *)(a1 + 728);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v12 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    *(_QWORD *)v8 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v8);
    v9 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v10 = a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_c561e33f7b9b6a5cc88742f5f6590796___(
           v6,
           v5,
           *(unsigned int *)(a1 + 736),
           v8);
    lambda_c561e33f7b9b6a5cc88742f5f6590796_::__lambda_c561e33f7b9b6a5cc88742f5f6590796_(v8);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14AD,
        (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
