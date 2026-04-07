/*
 * XREFs of ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180031280
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180028C18 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x180030C40 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180043FC4 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009EFF0 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A0624 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1078 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180028220 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(CGraphicsDeviceManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 3) )
    return 0LL;
  v2 = CGraphicsDeviceManager::InitializeGraphicsDevice(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x74,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)(unsigned int)v2,
    v4);
  return v3;
}
