/*
 * XREFs of ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052F8D0
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x180530240 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x18052FB88 (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18053E154 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18053F070 (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeView::InitDropFeedback(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  const struct _GUID *v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  IUnknown **p_punk; // [rsp+20h] [rbp-59h]
  IUnknown *punk; // [rsp+30h] [rbp-49h] BYREF
  void *v15; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-39h] BYREF
  char v17; // [rsp+50h] [rbp-29h]
  _BYTE v18[16]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v19; // [rsp+70h] [rbp-9h]
  _BYTE v20[40]; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v21; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), (char *)this + 100);
  *((_DWORD *)this + 37) = (int)(float)((float)(10 * *((_DWORD *)this + 29)) / 100.0);
  punk = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  p_punk = &punk;
  Instance = CDropFeedback_CreateInstance(*((_QWORD *)this + 2), (char *)this + 100);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v16[1] = (__int64)&punk;
    v17 = 1;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v7 = CDropFeedbackList_CreateInstance(v6, &v15);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v16[0] = 0LL;
      v8 = *((_QWORD *)this + 9);
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 128LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v16);
      v10 = v9(v8, v16);
      v5 = v10;
      if ( v10 >= 0 )
      {
        memset_0(v18, 0, 0x40uLL);
        while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v16[0] + 24LL))(v16[0], 1LL, v18) >= 0 )
        {
          LODWORD(p_punk) = 0;
          (*(void (__fastcall **)(void *, __int64, __int64, _BYTE *, IUnknown **))(*(_QWORD *)v15 + 64LL))(
            v15,
            v19,
            v19,
            v20,
            p_punk);
        }
        v21 = 0LL;
        AppResizeView::MakeDragGutterRect(this, *(_DWORD *)a2, &v21);
        v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, IUnknown **))(*(_QWORD *)v15 + 72LL))(
                v15,
                100LL,
                2LL,
                &v21,
                p_punk);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v10 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v15, 0LL);
          v5 = v10;
          if ( v10 >= 0 )
          {
            v10 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[1].QueryInterface)(punk);
            v5 = v10;
            if ( v10 >= 0 )
            {
              Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 7, &punk);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v16);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
              v5 = 0;
              goto LABEL_19;
            }
            v11 = 368LL;
          }
          else
          {
            v11 = 367LL;
          }
        }
        else
        {
          v11 = 364LL;
        }
      }
      else
      {
        v11 = 351LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15C,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    IUnknown_SetSite(punk, 0LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)Instance);
  }
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  return v5;
}
