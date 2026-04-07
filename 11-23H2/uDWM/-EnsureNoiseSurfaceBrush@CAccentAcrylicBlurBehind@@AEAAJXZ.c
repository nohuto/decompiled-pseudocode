/*
 * XREFs of ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009EFF0
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18009EC18 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1078 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800308D0 (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003092C (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180030988 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180031280 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E57C (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??$As@UICompositorInterop@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E5D8 (--$As@UICompositorInterop@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@.c)
 *     ??$As@UIDCompositionDesktopDevicePartner@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E634 (--$As@UIDCompositionDesktopDevicePartner@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mic.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(CAccentAcrylicBlurBehind *this)
{
  unsigned int v2; // ebx
  __int64 *v3; // r15
  HMODULE ModuleHandleW; // rdi
  HRSRC ResourceW; // rbx
  HGLOBAL Resource; // rax
  LPVOID v7; // rsi
  DWORD v8; // r12d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, __int64, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64 *); // rsi
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, __int64 *); // rbx
  int v19; // eax
  int v20; // eax
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64 *); // rbx
  int v22; // eax
  int v23; // eax
  __int64 (__fastcall ****v24)(_QWORD, GUID *, __int64 *); // r14
  int v25; // eax
  int v26; // eax
  int v27; // eax
  CGraphicsDeviceManager *v28; // rsi
  int v29; // eax
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(__int64, unsigned __int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, _QWORD, GUID *, __int64 *, int *); // rsi
  int v38; // eax
  __int64 v39; // rbx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(__int64, __int64, _QWORD); // rsi
  int v46; // eax
  int v47; // eax
  int v48; // eax
  __int64 v50; // [rsp+48h] [rbp-79h] BYREF
  __int64 v51; // [rsp+50h] [rbp-71h] BYREF
  __int64 v52; // [rsp+58h] [rbp-69h] BYREF
  __int64 v53; // [rsp+60h] [rbp-61h] BYREF
  __int64 v54; // [rsp+68h] [rbp-59h] BYREF
  __int64 v55; // [rsp+70h] [rbp-51h] BYREF
  __int64 (__fastcall ***v56)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-49h] BYREF
  __int64 v57; // [rsp+80h] [rbp-41h] BYREF
  __int64 v58; // [rsp+88h] [rbp-39h] BYREF
  __int64 v59; // [rsp+90h] [rbp-31h] BYREF
  __int64 v60; // [rsp+98h] [rbp-29h] BYREF
  __int64 (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-21h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-19h] BYREF
  int v63; // [rsp+B0h] [rbp-11h] BYREF
  int v64; // [rsp+B4h] [rbp-Dh] BYREF
  __int64 v65; // [rsp+B8h] [rbp-9h] BYREF
  int v66; // [rsp+C0h] [rbp-1h] BYREF
  int v67; // [rsp+C4h] [rbp+3h]
  __int64 v68; // [rsp+C8h] [rbp+7h]
  int v69; // [rsp+D0h] [rbp+Fh]
  int v70; // [rsp+D4h] [rbp+13h]
  float v71; // [rsp+D8h] [rbp+17h]
  float v72; // [rsp+DCh] [rbp+1Bh]
  float v73[4]; // [rsp+E0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v2 = 0;
  v3 = (__int64 *)((char *)this + 336);
  if ( !*((_QWORD *)this + 42) )
  {
    ModuleHandleW = GetModuleHandleW(L"Windows.UI.Xaml.Controls.dll");
    ResourceW = FindResourceW(ModuleHandleW, (LPCWSTR)0x7D0, (LPCWSTR)0xA);
    Resource = LoadResource(ModuleHandleW, ResourceW);
    v7 = LockResource(Resource);
    v8 = SizeofResource(ModuleHandleW, ResourceW);
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
    v68 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v50 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 112LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
    v11 = v10(v9, &v50);
    v2 = v11;
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v50 + 128LL))(v50, v7, v8);
      v2 = v12;
      if ( v12 >= 0 )
      {
        v51 = 0LL;
        v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
        v14 = v13(v9, v50, 0LL, 1LL, &v51);
        v2 = v14;
        if ( v14 >= 0 )
        {
          v53 = 0LL;
          v15 = v51;
          v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v51 + 104LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
          v17 = v16(v15, 0LL, &v53);
          v2 = v17;
          if ( v17 >= 0 )
          {
            v52 = 0LL;
            v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
            v19 = v18(v9, &v52);
            v2 = v19;
            if ( v19 >= 0 )
            {
              v20 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD))(*(_QWORD *)v52 + 64LL))(
                      v52,
                      v53,
                      &GUID_WICPixelFormat32bppPBGRA,
                      0LL);
              v2 = v20;
              if ( v20 >= 0 )
              {
                v54 = 0LL;
                v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 144LL);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                v22 = v21(v9, v52, 2LL, &v54);
                v2 = v22;
                if ( v22 >= 0 )
                {
                  v63 = 0;
                  v64 = 0;
                  v23 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v54 + 24LL))(v54, &v63, &v64);
                  v2 = v23;
                  if ( v23 >= 0 )
                  {
                    v55 = 0LL;
                    v24 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 296);
                    v25 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDesktopDevicePartner>(
                            v24,
                            &v55);
                    v2 = v25;
                    if ( v25 >= 0 )
                    {
                      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 256LL))(v55, 0LL);
                      v2 = v26;
                      if ( v26 >= 0 )
                      {
                        v59 = 0LL;
                        v27 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositorInterop>(
                                v24,
                                &v59);
                        v2 = v27;
                        if ( v27 >= 0 )
                        {
                          v56 = 0LL;
                          v28 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
                          v29 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v28);
                          if ( v29 < 0 )
                            wil::details::in1diag3::_FailFast_Hr(
                              retaddr,
                              (void *)0x33,
                              (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
                              (const char *)(unsigned int)v29,
                              0);
                          v30 = *((_QWORD *)v28 + 5);
                          v31 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v30 + 48LL);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                          v32 = 0LL;
                          v32.m128_f32[0] = (float)v63;
                          v33 = 0LL;
                          v33.m128_f32[0] = (float)v64;
                          v34 = v31(v30, _mm_unpacklo_ps(v32, v33).m128_u64[0], 87LL, 1LL, &v56);
                          v2 = v34;
                          if ( v34 >= 0 )
                          {
                            v58 = 0LL;
                            v35 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
                                    &v56,
                                    &v58);
                            v2 = v35;
                            if ( v35 >= 0 )
                            {
                              v57 = 0LL;
                              v36 = v58;
                              v37 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, int *))(*(_QWORD *)v58 + 24LL);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                              v38 = v37(v36, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, &v57, &v66);
                              v2 = v38;
                              if ( v38 >= 0 )
                              {
                                v60 = 0LL;
                                v39 = v57;
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                v40 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 40LL))(
                                        v39,
                                        v54,
                                        0LL,
                                        &v60);
                                v2 = v40;
                                if ( v40 >= 0 )
                                {
                                  v73[0] = (float)v66;
                                  v73[1] = (float)v67;
                                  v73[2] = (float)v66 + (float)v63;
                                  v73[3] = (float)v67 + (float)v64;
                                  v69 = 0;
                                  v70 = 0;
                                  v71 = (float)v63;
                                  v72 = (float)v64;
                                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 624LL))(v57, 1LL);
                                  (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v57 + 208LL))(
                                    v57,
                                    v60,
                                    v73);
                                  v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58);
                                  v2 = v41;
                                  if ( v41 >= 0 )
                                  {
                                    v62 = 0LL;
                                    v42 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                                            v24,
                                            &v62);
                                    v2 = v42;
                                    if ( v42 >= 0 )
                                    {
                                      v65 = 0LL;
                                      v43 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
                                              &v56,
                                              &v65);
                                      v2 = v43;
                                      if ( v43 >= 0 )
                                      {
                                        v61 = 0LL;
                                        v44 = v62;
                                        v45 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v62 + 192LL);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
                                        v46 = v45(v44, v65, &v61);
                                        v2 = v46;
                                        if ( v46 >= 0 )
                                        {
                                          v47 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v61)[11])(
                                                  v61,
                                                  0LL);
                                          v2 = v47;
                                          if ( v47 >= 0 )
                                          {
                                            v48 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                                                    &v61,
                                                    v3);
                                            v2 = v48;
                                            if ( v48 < 0 )
                                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x5D8u);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                          }
                                          else
                                          {
                                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x5D5u);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                          }
                                        }
                                        else
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x5D4u);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                        }
                                      }
                                      else
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x5D0u);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                      }
                                    }
                                    else
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x5CCu);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                    }
                                  }
                                  else
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x5C9u);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                  }
                                }
                                else
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x5B4u);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                }
                              }
                              else
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x5B0u);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                              }
                            }
                            else
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x5ABu);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                            }
                          }
                          else
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x5A8u);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                          }
                        }
                        else
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x5A1u);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x59Eu);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x59Du);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x599u);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x594u);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v54);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x591u);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x590u);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x58Du);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x58Au);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x587u);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x586u);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v2;
}
