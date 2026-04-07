/*
 * XREFs of ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18008EB44
 * Callers:
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004F61C (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Initialize@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C40BC (-Initialize@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180096744 (ModuleFailFastForHRESULT.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18009A974 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A66D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x1800C4150 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 */

int __fastcall CGraphicsDeviceManager::InitializeGraphicsDevice(CGraphicsDeviceManager *this)
{
  char v1; // dl
  int v3; // eax
  int v4; // edi
  int result; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  D3D_DRIVER_TYPE v9; // [rsp+30h] [rbp+8h]
  int v10; // [rsp+34h] [rbp+Ch]

  v1 = *((_BYTE *)this + 96);
  v9 = D3D_DRIVER_TYPE_WARP;
  v3 = v10;
  if ( !v1 )
    v3 = 1;
  v10 = v3;
  v4 = 2 - (v1 != 0);
  while ( 1 )
  {
    result = CGraphicsDeviceManager::InitializeGraphicsDeviceType(this, *(&v9 + (unsigned int)--v4));
    v6 = result;
    if ( result >= 0 )
      break;
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x4C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)result,
      v7);
    CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
    if ( !v4 )
      ModuleFailFastForHRESULT(v6, retaddr);
  }
  return result;
}
