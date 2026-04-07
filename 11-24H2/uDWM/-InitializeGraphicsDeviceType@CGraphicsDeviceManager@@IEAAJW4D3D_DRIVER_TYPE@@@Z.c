/*
 * XREFs of ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x1800C4150
 * Callers:
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18008EB44 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015BA4 (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180079278 (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007DD1C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180097FA8 (-reset@-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wi.c)
 *     ??$query_to@UID3D11Device4@@@?$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUID3D11Device4@@@Z @ 0x18009A5F0 (--$query_to@UID3D11Device4@@@-$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
HRESULT __fastcall CGraphicsDeviceManager::InitializeGraphicsDeviceType(
        CGraphicsDeviceManager *this,
        enum D3D_DRIVER_TYPE a2)
{
  ID3D11Device **ppDevice; // rsi
  HRESULT result; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, GUID *, __int64); // r9
  __int64 v9; // r10
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, GUID *, __int64); // r9
  __int64 v14; // r10
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, GUID *, __int64); // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, GUID *, __int64); // r9
  __int64 v22; // r10
  int v23; // eax
  void *v24; // rdx
  __int64 v25; // rdx
  void *v26; // rdx
  int Factory; // eax
  __int64 v28; // rdx
  __int64 *v29; // rdi
  void **v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 (__fastcall *v33)(__int64, GUID *, __int64); // r9
  __int64 v34; // r10
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, __int64, char *); // rbx
  __int64 v37; // rax
  __int64 (__fastcall *v38)(__int64, GUID *, __int64); // r9
  __int64 v39; // r10
  int v40; // eax
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, _QWORD, char *); // rsi
  int v43; // eax
  __int64 v44; // [rsp+50h] [rbp-20h] BYREF
  __int64 v45; // [rsp+58h] [rbp-18h] BYREF
  __int64 v46[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v49; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v50; // [rsp+C8h] [rbp+58h] BYREF

  pFeatureLevel = 0;
  ppDevice = (ID3D11Device **)((char *)this + 56);
  wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  result = D3D11CreateDevice(0LL, a2, 0LL, 0x20u, 0LL, 0, 7u, ppDevice, &pFeatureLevel, 0LL);
  if ( result >= 0 )
  {
    v6 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 64);
    v10 = v8(v9, &GUID_9b7e4e00_342c_4106_a19f_4f2704f689f0, v7);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    v45 = 0LL;
    v12 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v45);
    v15 = v13(v14, &GUID_77db970f_6276_48ba_ba28_070143b4392c, v12);
    v11 = v15;
    if ( v15 < 0 )
    {
      v16 = 110LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_38:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v45);
      return v11;
    }
    v17 = v45;
    v18 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v45 + 48LL);
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)this + 5);
    v19 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 40);
    v15 = v18(v17, &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0, v19);
    v11 = v15;
    if ( v15 < 0 )
    {
      v16 = 113LL;
      goto LABEL_10;
    }
    v49 = 0LL;
    v20 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v49);
    v23 = v21(v22, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v20);
    v11 = v23;
    if ( v23 < 0 )
    {
      v25 = 116LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v23);
LABEL_14:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v49);
      goto LABEL_38;
    }
    wil::details::ResetEvent(*((wil::details **)this + 9), v24);
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v49 + 240LL))(
            v49,
            *((_QWORD *)this + 9),
            (char *)this + 88);
    v11 = v23;
    if ( v23 < 0 )
    {
      v25 = 119LL;
      goto LABEL_13;
    }
    wil::details::ResetEvent(*((wil::details **)this + 10), v26);
    v50 = 0LL;
    Factory = wil::com_ptr_t<ID3D11Device,wil::err_returncode_policy>::query_to<ID3D11Device4>(
                (__int64)ppDevice,
                (__int64)&v50);
    v11 = Factory;
    if ( Factory >= 0 )
    {
      Factory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v50 + 520LL))(
                  v50,
                  *((_QWORD *)this + 10),
                  (char *)this + 92);
      v11 = Factory;
      if ( Factory >= 0 )
      {
        v29 = (__int64 *)((char *)this + 16);
        if ( *((_QWORD *)this + 2)
          || (*v29 = 0LL,
              v30 = (void **)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 16),
              Factory = D2D1CreateFactory(
                          D2D1_FACTORY_TYPE_MULTI_THREADED,
                          &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
                          0LL,
                          v30),
              v11 = Factory,
              Factory >= 0) )
        {
          v31 = *((_QWORD *)this + 3);
          *((_QWORD *)this + 3) = 0LL;
          if ( v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          v32 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 24);
          Factory = v33(v34, &GUID_31e6e7bc_e0ff_4d46_8c64_a0a8c41c15d3, v32);
          v11 = Factory;
          if ( Factory >= 0 )
          {
            v35 = *v29;
            v36 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v35 + 136LL);
            wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 4);
            Factory = v36(v35, v45, (char *)this + 32);
            v11 = Factory;
            if ( Factory >= 0 )
            {
              v44 = 0LL;
              v37 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v44);
              v40 = v38(v39, &GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330, v37);
              v11 = v40;
              if ( v40 >= 0 )
              {
                v46[0] = 0LL;
                v41 = v44;
                v42 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v44 + 40LL);
                wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::reset((__int64 *)this + 6);
                v43 = v42(v41, *((_QWORD *)this + 4), (char *)this + 48);
                v11 = v43;
                if ( v43 >= 0 )
                {
                  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v46);
                  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v44);
                  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v50);
                  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v49);
                  v11 = 0;
                  goto LABEL_38;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x8B,
                  (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
                  (const char *)(unsigned int)v43);
                wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v46);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x88,
                  (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
                  (const char *)(unsigned int)v40);
              }
              wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v44);
              goto LABEL_20;
            }
            v28 = 133LL;
          }
          else
          {
            v28 = 131LL;
          }
        }
        else
        {
          v28 = 128LL;
        }
      }
      else
      {
        v28 = 124LL;
      }
    }
    else
    {
      v28 = 123LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)Factory);
LABEL_20:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v50);
    goto LABEL_14;
  }
  return result;
}
