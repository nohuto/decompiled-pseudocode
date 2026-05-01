/*
 * XREFs of ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x18040E7C4
 * Callers:
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x18040E92C (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040EB84 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002FC18 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_ @ 0x1802E2ECC (_lambda_ab9f828b40129b4f40202efbf92da624_--__lambda_ab9f828b40129b4f40202efbf92da624_.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624_____lambda_ab9f828b40129b4f40202efbf92da624___ @ 0x180406874 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ab9f828b40129.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_SendViewTransitionNotification(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15[2]; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+58h] [rbp-8h]
  int v17; // [rsp+80h] [rbp+20h] BYREF
  struct IObjectArray *v18; // [rsp+98h] [rbp+38h] BYREF

  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  if ( (int)AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 536), &v18) >= 0 )
  {
    v17 = 0;
    if ( ((int (__fastcall *)(struct IObjectArray *, int *))v18->lpVtbl->GetCount)(v18, &v17) >= 0 )
    {
      if ( v17 )
      {
        v14 = (a1 + 120) & -(__int64)(a1 != 0);
        if ( v14 )
        {
          v6 = (a1 + 120) & -(__int64)(a1 != 0);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        }
        v12 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
        v15[0] = (__int64)v18;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
        v15[1] = a2;
        v12 = 0LL;
        v16 = a3;
        v7 = *(_DWORD *)(a1 + 576);
        v8 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab9f828b40129b4f40202efbf92da624_____lambda_ab9f828b40129b4f40202efbf92da624___(
               &v13,
               (__int64)v15);
        v9 = *v8;
        *v8 = 0LL;
        v10 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v10);
        }
        SHTaskPoolQueueTask(0LL, 2LL, v7);
        if ( v9 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
        lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_(v15);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  return 0LL;
}
