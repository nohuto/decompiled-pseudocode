/*
 * XREFs of ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x1802F97D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18029AA4C (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long___lambda_4af9e279c0557e674118e7fededcb641___ @ 0x1802F4D08 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802F4D08.c)
 *     _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x1802F5AE4 (_lambda_c5bad73058b4167fadc00bcfc86ad84b_--__lambda_c5bad73058b4167fadc00bcfc86ad84b_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::ShowView(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  RTL_SRWLOCK *v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // rax
  volatile int *v12; // rdx
  struct IAsyncCallback *v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v17[3]; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+38h] [rbp-18h]
  int v19; // [rsp+3Ch] [rbp-14h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF

  v9 = (RTL_SRWLOCK *)(a1 - 32);
  v21 = a1 - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  v10 = a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a6);
  v17[0] = (__int64)v9;
  v21 = 0LL;
  v17[1] = a2;
  v17[2] = a3;
  v18 = a4;
  v19 = a5;
  v20 = v10;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&a6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  v11 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long___lambda_4af9e279c0557e674118e7fededcb641___(
          &a6,
          (char *)v17);
  v13 = (struct IAsyncCallback *)*v11;
  v21 = *v11;
  *v11 = 0LL;
  v14 = a6;
  if ( a6 )
  {
    a6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      v14,
      v12);
  }
  v15 = CAppViewManager::_QueueOperation(v9, v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_(v17);
  return v15;
}
