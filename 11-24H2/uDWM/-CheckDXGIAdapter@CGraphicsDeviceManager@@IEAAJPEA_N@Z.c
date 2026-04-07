/*
 * XREFs of ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18007DD4C
 * Callers:
 *     ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x18007DCC0 (-ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180079278 (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007DD1C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x18009A94C (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     ??1?$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C3F9C (--1-$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CGraphicsDeviceManager::CheckDXGIAdapter(CGraphicsDeviceManager *this, bool *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, GUID *, __int64); // r9
  __int64 v6; // r10
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  void **v10; // rax
  HRESULT DXGIFactory1; // eax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, __int64, GUID *, __int64); // rdi
  __int64 v14; // rax
  char v15; // r14
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, _QWORD, __int64 *); // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r9
  int (__fastcall *v21)(__int64, GUID *, __int64); // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  int (__fastcall *v25)(__int64, GUID *, __int64); // r10
  void *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v37[96]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[296]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v39; // [rsp+1E8h] [rbp+E8h]
  _BYTE v40[296]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v41; // [rsp+318h] [rbp+218h]
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  if ( a2 )
    *a2 = 0;
  v35 = 0LL;
  v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v35);
  v7 = v5(v6, &GUID_770aae78_f26f_4dba_a829_253c83d1b387, v4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 312LL))(*((_QWORD *)this + 7)) < 0 )
      goto LABEL_34;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v35 + 104LL))(v35) )
      goto LABEL_32;
    memset_0(v38, 0, 0x130uLL);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), v38);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 269LL;
      goto LABEL_9;
    }
    v33 = 0LL;
    v10 = (void **)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v33);
    DXGIFactory1 = CreateDXGIFactory1(&GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a, v10);
    v8 = DXGIFactory1;
    if ( DXGIFactory1 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x110,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)DXGIFactory1,
        v30);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v33);
      goto LABEL_36;
    }
    v34 = 0LL;
    v12 = v33;
    v13 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64))(*(_QWORD *)v33 + 208LL);
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)&v34);
    v14 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v34);
    if ( v13(v12, v39, &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0, v14) < 0 )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      v32 = 0LL;
      v16 = v33;
      v17 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 56LL);
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(&v32);
      if ( v17(v16, 0LL, &v32) < 0
        || (memset_0(v40, 0, 0x130uLL), (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 64LL))(v32, v40) < 0)
        || v41 != v39 )
      {
        v31 = 0LL;
        v36 = 0LL;
        memset_0(v37, 0, sizeof(v37));
        v18 = *v34;
        v31 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v18 + 56))(v34, 0LL, &v31) < 0
          || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 56LL))(v31, v37) < 0 )
        {
          v15 = 0;
        }
        wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>::~com_ptr_t<IDXGIOutput,wil::err_returncode_policy>(&v36);
        wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>::~com_ptr_t<IDXGIOutput,wil::err_returncode_policy>(&v31);
      }
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v32);
      if ( v15 )
      {
        v31 = 0LL;
        v32 = 0LL;
        v19 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v32);
        if ( v21(v20, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v19) >= 0 )
        {
          v22 = v31;
          v31 = 0LL;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v23 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v31);
          if ( v25(v24, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v23) >= 0 )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 248LL))(v31, *((unsigned int *)this + 22));
            *((_DWORD *)this + 22) = 0;
            wil::details::ResetEvent(*((wil::details **)this + 9), v26);
            (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v32 + 240LL))(
              v32,
              *((_QWORD *)this + 9),
              (char *)this + 88);
            v27 = *((_QWORD *)this + 5);
            v28 = (__int64)v34;
            *((_QWORD *)this + 5) = v34;
            if ( v28 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v31);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v32);
      }
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v34);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v33);
    if ( v15 )
    {
LABEL_32:
      if ( a2 )
        *a2 = 1;
    }
    else
    {
LABEL_34:
      CGraphicsDeviceManager::HandleGraphicsDeviceLost(this);
    }
    v8 = 0;
    goto LABEL_36;
  }
  v9 = 261LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)(unsigned int)v7,
    v30);
LABEL_36:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v35);
  return v8;
}
