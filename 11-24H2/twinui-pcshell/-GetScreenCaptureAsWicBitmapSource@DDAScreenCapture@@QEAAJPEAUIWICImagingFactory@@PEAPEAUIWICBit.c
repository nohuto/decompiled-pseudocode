/*
 * XREFs of ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803F4F18
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803F0670 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1801358F8 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGIResource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803F4D8C (--$As@UID3D11Texture2D@@@-$ComPtr@UIDXGIResource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___ @ 0x1803F4DDC (wil--details--ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___--_ScopeExitFn__lambda_1b97.c)
 *     ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x1803F5944 (-InitializeDuplication@DDAScreenCapture@@AEAAJXZ.c)
 *     ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x1803F5EA8 (-TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(
        DDAScreenCapture *this,
        struct IWICImagingFactory *a2,
        struct IWICBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct IWICBitmapSource *v34; // rax
  int v35; // eax
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  struct IWICBitmapSource *v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  struct IDXGIResource *v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44[2]; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46[2]; // [rsp+90h] [rbp-70h] BYREF
  char v47; // [rsp+A0h] [rbp-60h]
  int v48[4]; // [rsp+A8h] [rbp-58h] BYREF
  DDAScreenCapture *v49; // [rsp+B8h] [rbp-48h]
  char v50; // [rsp+C0h] [rbp-40h]
  _OWORD v51[3]; // [rsp+C8h] [rbp-38h] BYREF
  GUID v52; // [rsp+F8h] [rbp-8h] BYREF
  GUID v53; // [rsp+108h] [rbp+8h] BYREF
  DXGI_OUTDUPL_FRAME_INFO v54; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  *a3 = 0LL;
  v43 = 0LL;
  memset(&v54, 0, sizeof(v54));
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 126LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_65;
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
  v6 = DDAScreenCapture::TryAcquireFrame(this, &v54, &v43);
  v7 = v6;
  if ( v6 == -2005270490 )
  {
    v6 = DDAScreenCapture::InitializeDuplication(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 132LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
    v6 = DDAScreenCapture::TryAcquireFrame(this, &v54, &v43);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 133LL;
      goto LABEL_6;
    }
  }
  else if ( v6 < 0 )
  {
    v8 = 137LL;
    goto LABEL_6;
  }
  v49 = this;
  v50 = 1;
  if ( !v54.AccumulatedFrames )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v9);
    v7 = -2147483638;
    goto LABEL_65;
  }
  v38 = 0LL;
  v10 = Microsoft::WRL::ComPtr<IDXGIResource>::As<ID3D11Texture2D>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v43,
          &v38);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v11);
    goto LABEL_65;
  }
  memset(v51, 0, 44);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v38 + 80LL))(v38, v51);
  v37 = 0LL;
  *(_QWORD *)((char *)&v51[1] + 12) = 3LL;
  *(_QWORD *)((char *)&v51[2] + 4) = 0x20000LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, _QWORD, __int64 *))(**((_QWORD **)this + 13) + 40LL))(
          *((_QWORD *)this + 13),
          v51,
          0LL,
          &v37);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v13);
    goto LABEL_65;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 14) + 376LL))(
    *((_QWORD *)this + 14),
    v37,
    v38);
  *(_OWORD *)v48 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, int *))(**((_QWORD **)this + 14) + 112LL))(
          *((_QWORD *)this + 14),
          v37,
          0LL,
          1LL,
          0,
          v48);
  v7 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v15);
    goto LABEL_65;
  }
  v16 = v37;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  v44[1] = (__int64)this;
  v46[0] = v16;
  v44[0] = 0LL;
  v46[1] = (__int64)this;
  v47 = 1;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v44);
  v39 = 0LL;
  v52 = GUID_WICPixelFormat32bppBGRA;
  v17 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, _QWORD, _QWORD, GUID *, int, int, _QWORD, __int64 *))a2->lpVtbl->CreateBitmapFromMemory)(
          a2,
          LODWORD(v51[0]),
          DWORD1(v51[0]),
          &v52,
          v48[2],
          v48[2] * DWORD1(v51[0]),
          *(_QWORD *)v48,
          &v39);
  v7 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v46);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v18);
    goto LABEL_65;
  }
  v42 = 0LL;
  if ( DWORD1(v51[0]) <= LODWORD(v51[0]) )
  {
    v25 = v39;
    v44[0] = v39;
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(v44);
    v44[0] = 0LL;
    v42 = v25;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v44);
  }
  else
  {
    v40 = 0LL;
    v19 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))a2->lpVtbl->CreateBitmapFlipRotator)(
            a2,
            &v40);
    v7 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v19);
      v20 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
      wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v46);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v21);
      goto LABEL_65;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v40 + 64LL))(v40, v39, 3LL);
    v7 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v22);
      v23 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
      wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v46);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
      v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v24);
      goto LABEL_65;
    }
    v25 = v40;
    v44[0] = v40;
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(v44);
    v44[0] = 0LL;
    v42 = v25;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v44);
    v26 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
  }
  v53 = GUID_WICPixelFormat24bppBGR;
  v41 = 0LL;
  v27 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a2->lpVtbl->CreateFormatConverter)(
          a2,
          &v41);
  v28 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v27);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v41);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v46);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v29);
LABEL_53:
    v7 = v28;
    goto LABEL_65;
  }
  v45 = 0;
  v30 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, GUID *, GUID *, int *))v41->lpVtbl[1].AddRef)(
          v41,
          &v52,
          &v53,
          &v45);
  v28 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v30);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v41);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v46);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v31);
    goto LABEL_53;
  }
  v32 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))v41->lpVtbl[1].QueryInterface)(
          v41,
          v25,
          &v53,
          0LL,
          0LL,
          0LL,
          0);
  v7 = v32;
  if ( v32 >= 0 )
  {
    v34 = v41;
    v41 = 0LL;
    *a3 = v34;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v41);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v46);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v35 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v35);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v32);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v41);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v46);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
    v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v33 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v33);
  }
LABEL_65:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
  return v7;
}
