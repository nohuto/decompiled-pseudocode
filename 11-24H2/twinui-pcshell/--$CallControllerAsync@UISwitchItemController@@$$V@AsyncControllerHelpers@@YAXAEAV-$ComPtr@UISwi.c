/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXXZ@Z @ 0x1804CE9B0
 * Callers:
 *     ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x1804CF640 (-SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1804B12B0 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_04782cd470235717f7963c3576bcb0e4_@@@Z @ 0x1804CEC78 (--$Make@V-$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        volatile signed __int32 *a2)
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // edi
  __int64 *v5; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  DWORD CurrentThreadId; // eax
  __int64 (__fastcall *v9)(__int64); // [rsp+30h] [rbp-18h] BYREF
  __int64 v10[2]; // [rsp+38h] [rbp-10h] BYREF
  volatile signed __int32 *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *a1;
  if ( v3 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v3);
    v9 =  ISwitchItemController::`vcall'{112,{flat}};
    v10[0] = (__int64)*a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v5 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>,_lambda_04782cd470235717f7963c3576bcb0e4_>(
                      &v11,
                      &v9);
    v6 = *v5;
    *v5 = 0LL;
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
    }
    CurrentThreadId = GetCurrentThreadId();
    SHTaskPoolQueueTask(ControllerApartment, 0LL, CurrentThreadId);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
  }
}
