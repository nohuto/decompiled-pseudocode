/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180014730
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800149A4 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CFrameApplicationPresentation_CreateInstance@@YAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1800138A4 (-CFrameApplicationPresentation_CreateInstance@@YAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersive.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180038080 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800883DC (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x180300F74 (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  char v4; // bl
  _QWORD *v5; // r14
  int Instance; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  const struct _GUID *v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  *((_BYTE *)this + 195) = 0;
  v4 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 19) + 88LL) + 328LL))(
         *((_QWORD *)this + 19) + 88LL,
         0LL)
    && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 19) + 88LL) + 328LL))(
          *((_QWORD *)this + 19) + 88LL,
          4LL);
  v5 = (_QWORD *)((char *)this + 144);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  Instance = CFrameApplicationPresentation_CreateInstance(
               *(const unsigned __int16 **)(*((_QWORD *)this + 19) + 576LL),
               *(_DWORD *)(*((_QWORD *)this + 19) + 584LL),
               v4,
               a2,
               (struct IImmersiveApplicationInternal *)((*((_QWORD *)this + 19) + 112LL) & -(__int64)(*((_QWORD *)this + 19) != 0LL)),
               v14,
               (void **)this + 18);
  if ( Instance >= 0 )
  {
    v17 = 0LL;
    v7 = *v5;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 136LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    Instance = v8(v7, &v17);
    if ( Instance >= 0 )
    {
      v19 = 0LL;
      Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v19);
      if ( Instance >= 0 )
      {
        v18 = 0LL;
        v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 19);
        v10 = **v9;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        v10(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v18);
        v15 = v18;
        v16 = *v5;
        v11 = *((_QWORD *)this + 19);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((char *)this + 240);
        Instance = Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
                     (int)this + 240,
                     (unsigned int)&v19,
                     (int)v11 + 744,
                     (unsigned int)&v16,
                     (__int64)&v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      }
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( Instance >= 0 )
    {
      *((_BYTE *)this + 192) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 104LL))(*v5);
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)Instance;
}
