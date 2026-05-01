/*
 * XREFs of ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1804E8F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_8f3900148952faa68610648471a8cff1_::__lambda_8f3900148952faa68610648471a8cff1_ @ 0x18006D4A4 (_lambda_8f3900148952faa68610648471a8cff1_--__lambda_8f3900148952faa68610648471a8cff1_.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800C9598 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180191370 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1_____lambda_8f3900148952faa68610648471a8cff1___ @ 0x1804E8C40 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f3900148952f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged(RTL_SRWLOCK *this, int a2)
{
  int v4; // esi
  int CallbackArray; // eax
  HRESULT v6; // ebx
  IUnknown **v7; // rax
  unsigned int Ptr_high; // edi
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  int v12; // edi
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-20h] BYREF
  struct IObjectArray *v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  void *v17; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *ppvOut; // [rsp+70h] [rbp+20h] BYREF
  struct IObjectArray *v20; // [rsp+80h] [rbp+30h] BYREF
  volatile signed __int32 *v21; // [rsp+88h] [rbp+38h] BYREF

  if ( LODWORD(this[12].Ptr) )
  {
    wil::AcquireSRWLockExclusive(&v14, this + 14);
    v4 = a2 == 0;
    if ( v4 != LODWORD(this[13].Ptr) )
    {
      LODWORD(this[13].Ptr) = v4;
      v20 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      CallbackArray = CGITRegistrationList::GetCallbackArray(this + 6, &v20);
      v6 = CallbackArray;
      if ( CallbackArray < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)CallbackArray);
LABEL_13:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
        return (unsigned int)v6;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v7 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)&this[-14], &v21);
      v6 = IUnknown_QueryService(
             *v7,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x76,
          (int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_13;
      }
      v15 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v16 = v4;
      v17 = ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      Ptr_high = HIDWORD(this[12].Ptr);
      v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1_____lambda_8f3900148952faa68610648471a8cff1___(
             &v21,
             (__int64)&v15);
      v10 = *v9;
      *v9 = 0LL;
      v11 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v11);
      }
      v12 = SHTaskPoolQueueTask(3LL, 2LL, Ptr_high);
      if ( v10 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
      lambda_8f3900148952faa68610648471a8cff1_::__lambda_8f3900148952faa68610648471a8cff1_((__int64 *)&v15);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8A,
          (int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
        v6 = v12;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  }
  return 0LL;
}
