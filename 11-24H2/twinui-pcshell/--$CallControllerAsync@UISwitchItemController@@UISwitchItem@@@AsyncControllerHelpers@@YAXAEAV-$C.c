/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x1804CEA80
 * Callers:
 *     ?CloseSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804CF1E0 (-CloseSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804CF4A0 (-InvokeSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?MoveItemToNewDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804CF540 (-MoveItemToNewDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?SwitchItemDragStarted@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804CF650 (-SwitchItemDragStarted@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1804B12B0 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_52ee436932253a320c8b1bf838bed70e_@@@Z @ 0x1804CED20 (--$Make@V-$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Window.c)
 *     ??1_lambda_52ee436932253a320c8b1bf838bed70e_@@QEAA@XZ @ 0x1804CF04C (--1_lambda_52ee436932253a320c8b1bf838bed70e_@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 *a3)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebp
  __int64 *v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-30h] BYREF
  __int64 v15[5]; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v6 = *a1;
  if ( v6 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v6);
    v13 = a2;
    v14 = *a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v15[0] = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v8 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_52ee436932253a320c8b1bf838bed70e_>,_lambda_52ee436932253a320c8b1bf838bed70e_>(
                      &v16,
                      &v13);
    v9 = *v8;
    *v8 = 0LL;
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v10);
    }
    CurrentThreadId = GetCurrentThreadId();
    SHTaskPoolQueueTask(ControllerApartment, 0LL, CurrentThreadId);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    _lambda_52ee436932253a320c8b1bf838bed70e_::~_lambda_52ee436932253a320c8b1bf838bed70e_((_lambda_52ee436932253a320c8b1bf838bed70e_ *)&v13);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3);
}
