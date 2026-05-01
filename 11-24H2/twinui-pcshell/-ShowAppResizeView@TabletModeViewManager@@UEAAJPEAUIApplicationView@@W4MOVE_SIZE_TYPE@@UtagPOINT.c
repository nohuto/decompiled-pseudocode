/*
 * XREFs of ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x180521CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x1801CD068 (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x180522EA4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x18052F23C (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1805314D4 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabletModeViewManager::ShowAppResizeView(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, LONG *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64 *, _QWORD); // rdi
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  const struct _GUID *v20; // rdx
  bool v21; // cl
  int Instance; // eax
  IUnknown *v23; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rdi
  int v29; // eax
  unsigned int v30; // r14d
  IUnknown *v31; // rbx
  IUnknown *punk; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+38h] [rbp-51h] BYREF
  struct tagRECT v35; // [rsp+40h] [rbp-49h] BYREF
  __int64 v36; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v37[3]; // [rsp+58h] [rbp-31h] BYREF
  char v38; // [rsp+70h] [rbp-19h]
  struct tagRECT v39; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v40[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v37[0] = a4;
  if ( !a2 )
  {
LABEL_15:
    v19 = a1[7];
    if ( v19 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, 0LL);
    punk = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    Instance = AppResizeView_CreateInstance(v21, v20, (void **)&punk);
    v10 = Instance;
    if ( Instance >= 0 )
    {
      v36 = 0LL;
      v23 = punk;
      QueryInterface = punk->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      v25 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))QueryInterface)(
              v23,
              &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
              &v36);
      v10 = v25;
      if ( v25 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 8);
        v25 = TabletModeInputHandler_CreateInstance(1LL, v36, v27, a1 + 8);
        v10 = v25;
        if ( v25 >= 0 )
        {
          v28 = a1 - 11;
          v37[1] = a1 - 11;
          v37[2] = &punk;
          v38 = 1;
          IUnknown_SetSite(punk, (IUnknown *)a1 - 11);
          v29 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *))punk->lpVtbl[1].QueryInterface)(punk, v37);
          v30 = v29;
          if ( v29 >= 0 )
          {
            v31 = punk;
            if ( (IUnknown *)a1[7] != punk )
            {
              if ( punk )
                ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
              v34 = a1[7];
              a1[7] = v31;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
            }
            TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)(a1 - 11));
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
            v10 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14B,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
              (const char *)(unsigned int)v29);
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[19] + 56LL))(v28[19]);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v28 + 19);
            IUnknown_SetSite(punk, 0LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
            v10 = v30;
          }
          goto LABEL_34;
        }
        v26 = 320LL;
      }
      else
      {
        v26 = 319LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
    }
LABEL_34:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    return v10;
  }
  *(_QWORD *)&v35.right = 0LL;
  v7 = a1[4];
  v8 = *(__int64 (__fastcall **)(__int64, LONG *))(*(_QWORD *)v7 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35.right);
  v9 = v8(v7, &v35.right);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)&v35.right + 48LL))(*(_QWORD *)&v35.right) )
    {
      v10 = -2147019873;
      v11 = 2147947423LL;
      v12 = 285LL;
      goto LABEL_6;
    }
    v34 = 0LL;
    v13 = *(_QWORD *)&v35.right;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(**(_QWORD **)&v35.right + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    v15 = v14(v13, a2, &v34, 0LL);
    v10 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 289LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      goto LABEL_21;
    }
    v39 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v34 + 56LL))(v34, 0LL, &v39);
    memset(v40, 0, sizeof(v40));
    v41 = 0LL;
    (*(void (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)&v35.right + 24LL))(*(_QWORD *)&v35.right, v40);
    v35.left = 0;
    ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges((ImmersiveApplicationLayout *)v40, &v39, &v39, &v35);
    if ( a3 == 4 )
    {
      v18 = (v35.left & 1) == 0;
    }
    else
    {
      if ( a3 != 3 )
        goto LABEL_19;
      v18 = (v35.left & 2) == 0;
    }
    if ( !v18 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35.right);
      goto LABEL_15;
    }
LABEL_19:
    v10 = -2147418113;
    v16 = 2147549183LL;
    v17 = 304LL;
    goto LABEL_20;
  }
  v11 = (unsigned int)v9;
  v12 = 284LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)v11);
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35.right);
  return v10;
}
