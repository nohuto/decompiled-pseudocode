/*
 * XREFs of ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1078
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A0DAC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 *     ?OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ @ 0x1801080DC (-OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001FCEC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180028C18 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180031280 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UICompositionEffectBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E520 (--$As@UICompositionEffectBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionBrush@Composition@.c)
 *     ??4?$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z @ 0x18009E8BC (--4-$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009EFF0 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccentAcrylicBlurBehind::ValidateGraphicsDevice(CAccentAcrylicBlurBehind *this)
{
  __int64 *v2; // rbx
  CGraphicsDeviceManager *v3; // rsi
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // esi
  CGraphicsDeviceManager *v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  bool v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (__int64 *)((char *)this + 304);
  if ( !*((_QWORD *)this + 38) )
    goto LABEL_9;
  v3 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  v4 = (int)CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v3) < 0 ? 0LL : *((_QWORD *)v3 + 3);
  if ( *v2 != v4 )
    goto LABEL_9;
  v13 = 1;
  v5 = CGraphicsDeviceManager::CheckDXGIAdapter(
         *((CGraphicsDeviceManager **)CDesktopManager::s_pDesktopManagerInstance + 7),
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !v13 )
  {
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
    v8 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
    if ( (int)CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v8) < 0 )
      v9 = 0LL;
    else
      v9 = *((_QWORD *)v8 + 3);
    Microsoft::WRL::ComPtr<ID2D1Device>::operator=(v2, v9);
    if ( !*v2 )
      return 2147500037LL;
    v10 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F1,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    if ( *((_QWORD *)this + 41) )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::As<Windows::UI::Composition::ICompositionEffectBrush>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 41,
        &v14);
      v16 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Noise", 6u, 5u);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 56LL))(
              v14,
              v16,
              *((_QWORD *)this + 42));
      v11 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5F9,
          (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)v12);
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        return v11;
      }
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    }
  }
  return 0LL;
}
