/*
 * XREFs of ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180028220
 * Callers:
 *     ?Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z @ 0x180027BC8 (-Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180031280 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007478 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064 (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180025D10 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
HRESULT __fastcall CGraphicsDeviceManager::InitializeGraphicsDevice(CGraphicsDeviceManager *this)
{
  ID3D11Device **ppDevice; // rbx
  __int64 v3; // rcx
  HRESULT result; // eax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, GUID *, char *); // r14
  __int64 **v9; // rsi
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  void *v14; // rdx
  __int64 *v15; // rbx
  HRESULT Factory; // eax
  HRESULT v17; // esi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, char *); // r14
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v22)(_QWORD, GUID *, __int64 *); // rax
  int v23; // eax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, char *); // r14
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  int pFeatureLevels; // [rsp+20h] [rbp-48h]
  __int64 v31[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+50h] BYREF

  ppDevice = (ID3D11Device **)((char *)this + 48);
  v3 = *((_QWORD *)this + 6);
  *ppDevice = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  result = D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_WARP, 0LL, 0x20u, 0LL, 0, 7u, ppDevice, &pFeatureLevel, 0LL);
  if ( result >= 0 )
  {
    v36 = 0LL;
    v5 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))(*ppDevice)->lpVtbl->QueryInterface)(
           *ppDevice,
           &GUID_77db970f_6276_48ba_ba28_070143b4392c,
           &v36);
    v6 = v5;
    if ( v5 < 0 )
    {
      v28 = 62LL;
    }
    else
    {
      v7 = v36;
      v8 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v36 + 48LL);
      v9 = (__int64 **)((char *)this + 32);
      v10 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v5 = v8(v7, &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0, (char *)this + 32);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v34 = 0LL;
        v11 = *v9;
        v12 = **v9;
        v34 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v12 + 48))(
                v11,
                &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,
                &v34);
        v6 = v13;
        if ( v13 < 0 )
        {
          v29 = 68LL;
        }
        else
        {
          wil::details::ResetEvent(*((wil::details **)this + 7), v14);
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v34 + 240LL))(
                  v34,
                  *((_QWORD *)this + 7),
                  (char *)this + 64);
          v6 = v13;
          if ( v13 < 0 )
          {
            v29 = 71LL;
          }
          else
          {
            v15 = (__int64 *)((char *)this + 16);
            if ( !*((_QWORD *)this + 2) )
            {
              *v15 = 0LL;
              Factory = D2D1CreateFactory(
                          D2D1_FACTORY_TYPE_SINGLE_THREADED,
                          &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
                          0LL,
                          (void **)this + 2);
              v17 = Factory;
              if ( Factory < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x4B,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
                  (const char *)(unsigned int)Factory,
                  pFeatureLevels);
                wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v34);
                v6 = v17;
                goto LABEL_20;
              }
            }
            v18 = *v15;
            v19 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v18 + 136LL);
            v20 = *((_QWORD *)this + 3);
            *((_QWORD *)this + 3) = 0LL;
            if ( v20 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            v13 = v19(v18, v36, (char *)this + 24);
            v6 = v13;
            if ( v13 >= 0 )
            {
              v35 = 0LL;
              v21 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 6)
                                                                          + 32LL);
              v22 = *v21;
              v35 = 0LL;
              v23 = (*v22)(v21, &GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330, &v35);
              v6 = v23;
              if ( v23 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x51,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
                  (const char *)(unsigned int)v23,
                  pFeatureLevels);
              }
              else
              {
                v31[0] = 0LL;
                v24 = v35;
                v25 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v35 + 40LL);
                v26 = *((_QWORD *)this + 5);
                *((_QWORD *)this + 5) = 0LL;
                if ( v26 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
                v27 = v25(v24, *((_QWORD *)this + 3), (char *)this + 40);
                v6 = v27;
                if ( v27 >= 0 )
                {
                  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(v31);
                  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v35);
                  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v34);
                  v6 = 0;
LABEL_20:
                  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v36);
                  return v6;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x54,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
                  (const char *)(unsigned int)v27,
                  pFeatureLevels);
                wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(v31);
              }
              wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v35);
LABEL_30:
              wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v34);
              goto LABEL_20;
            }
            v29 = 78LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
          (const char *)(unsigned int)v13,
          pFeatureLevels);
        goto LABEL_30;
      }
      v28 = 65LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)v5,
      pFeatureLevels);
    goto LABEL_20;
  }
  return result;
}
