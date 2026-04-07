/*
 * XREFs of ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18009A974
 * Callers:
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18008EB44 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x18009A94C (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C3FC4 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall CGraphicsDeviceManager::ReleaseGraphicsDevice(CGraphicsDeviceManager *this)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, GUID *, __int64); // r9
  __int64 v4; // r10
  int v5; // eax
  unsigned int v6; // edi
  void *v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) )
  {
    v11 = 0LL;
    v2 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v11);
    v5 = v3(v4, &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, v2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v11);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 248LL))(v11, *((unsigned int *)this + 22));
    *((_DWORD *)this + 22) = 0;
    wil::details::ResetEvent(*((wil::details **)this + 9), v8);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v11);
  }
  if ( *((_DWORD *)this + 23) )
  {
    v11 = 0LL;
    v9 = wil::com_ptr_t<ID3D11Device,wil::err_returncode_policy>::query_to<ID3D11Device4>(
           (__int64)this + 56,
           (__int64)&v11);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v11);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 528LL))(v11, *((unsigned int *)this + 23));
    *((_DWORD *)this + 23) = 0;
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v11);
  }
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)this + 5);
  wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 4);
  wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  return 0LL;
}
