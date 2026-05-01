/*
 * XREFs of ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x18052BADC
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x18052BD54 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18053E154 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18053F070 (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::InitDropFeedback(WindowArrangementView *this, struct IUnknown *a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  const struct _GUID *v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  IUnknown **p_punk; // [rsp+20h] [rbp-69h]
  IUnknown *punk; // [rsp+30h] [rbp-59h] BYREF
  void *v15; // [rsp+38h] [rbp-51h] BYREF
  __int64 v16[3]; // [rsp+40h] [rbp-49h] BYREF
  char v17; // [rsp+58h] [rbp-31h]
  _QWORD v18[2]; // [rsp+60h] [rbp-29h] BYREF
  struct IUnknown *v19; // [rsp+70h] [rbp-19h]
  _BYTE v20[40]; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v21[2]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  (*(void (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15), v21);
  punk = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  p_punk = &punk;
  Instance = CDropFeedback_CreateInstance(a2, v21);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v16[1] = (__int64)&punk;
    v16[2] = (__int64)this;
    v17 = 1;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v7 = CDropFeedbackList_CreateInstance(v6, &v15);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v16[0] = 0LL;
      v8 = *((_QWORD *)this + 15);
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 128LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v16);
      v10 = v9(v8, v16);
      v5 = v10;
      if ( v10 >= 0 )
      {
        memset_0(v18, 0, 0x40uLL);
        while ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v16[0] + 24LL))(v16[0], 5LL, v18) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 24LL))(v18[0]) == 4 )
          {
            (*(void (__fastcall **)(void *, __int64, __int64, _BYTE *))(*(_QWORD *)v15 + 72LL))(v15, 100LL, 1LL, v20);
          }
          else if ( !SHIsSameObject(*((struct IUnknown **)this + 11), v19) )
          {
            LODWORD(p_punk) = 0;
            (*(void (__fastcall **)(void *, struct IUnknown *, struct IUnknown *, _BYTE *, IUnknown **))(*(_QWORD *)v15 + 64LL))(
              v15,
              v19,
              v19,
              v20,
              p_punk);
          }
        }
        v10 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v15, 0LL);
        v5 = v10;
        if ( v10 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&punk);
          *((_QWORD *)this + 9) = punk;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v16);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
          v5 = 0;
          goto LABEL_18;
        }
        v11 = 1060LL;
      }
      else
      {
        v11 = 1035LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x408,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    IUnknown_SetSite(punk, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FF,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
  }
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  return v5;
}
