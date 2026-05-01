/*
 * XREFs of ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x180532CE0
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1805324A0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointDivider::ShellTargetChanged(JointDivider *this, struct IUnknown *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, GUID *, __int64 *); // rdi
  __int64 *v15; // rax
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, GUID *, __int64 *); // rdi
  __int64 *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v20; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  *((_DWORD *)this + 8) = 0;
  v4 = *((_QWORD *)this + 5);
  if ( v4
    && a2
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4) > 1
    && (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 5) + 184LL))(
         *((_QWORD *)this + 5),
         a2) )
  {
    v22 = 0LL;
    v5 = *((_QWORD *)this + 5);
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v7 = v6(v5, 0LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v22);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v7);
LABEL_9:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      return v8;
    }
    v21 = 0LL;
    v9 = *((_QWORD *)this + 5);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    v11 = v10(v9, 1LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v21);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      goto LABEL_9;
    }
    v20 = 0LL;
    v13 = v22;
    v14 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 48LL);
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v20);
    if ( v14(v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v15) >= 0 && SHIsSameObject(v20, a2) )
    {
      *((_DWORD *)this + 8) = 1;
    }
    else
    {
      v16 = v21;
      v17 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v21 + 48LL);
      v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v20);
      if ( v17(v16, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v18) >= 0 && SHIsSameObject(v20, a2) )
        *((_DWORD *)this + 8) = 2;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  }
  InvalidateRect(*((HWND *)this + 3), 0LL, 1);
  return 0LL;
}
