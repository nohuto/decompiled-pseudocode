/*
 * XREFs of ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021C810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x18053B0D8 (-RegisterForEvents@JointResize@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall JointResize::SubscribeToServices(JointResize *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // ebx
  __int64 v6; // rdx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v9; // rax
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  LPVOID v14; // rax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         (char *)this + 104);
  if ( v5 < 0 )
  {
    v6 = 219LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = a2->lpVtbl->QueryService;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 14);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v9);
  if ( v5 < 0 )
  {
    v6 = 220LL;
    goto LABEL_3;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
         a2,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         (char *)this + 120);
  if ( v5 < 0 )
  {
    v6 = 221LL;
    goto LABEL_3;
  }
  v11 = a2->lpVtbl->QueryService;
  v12 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
         a2,
         &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
         &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
         (char *)this + 128);
  if ( v5 < 0 )
  {
    v6 = 222LL;
    goto LABEL_3;
  }
  v13 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 16))(
         *((_QWORD *)this + 16),
         &GUID_f833ec36_9be2_5462_a4e1_e8a28819dea7,
         (char *)this + 136);
  if ( v5 < 0 )
  {
    v6 = 223LL;
    goto LABEL_3;
  }
  v5 = JointResize::RegisterForEvents((JointResize *)((char *)this - 24));
  if ( v5 < 0 )
  {
    v6 = 231LL;
    goto LABEL_3;
  }
  ppv = 0LL;
  CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  v14 = ppv;
  ppv = 0LL;
  v15 = *((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = v14;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return 0LL;
}
