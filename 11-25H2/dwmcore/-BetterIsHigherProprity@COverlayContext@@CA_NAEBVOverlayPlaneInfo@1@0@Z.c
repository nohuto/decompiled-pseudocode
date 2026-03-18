/*
 * XREFs of ?BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1802742F8
 * Callers:
 *     ?FindHighestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18023D1B0 (-FindHighestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@CO.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180147B40 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180177490 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180277194 (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18027729C (-IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::BetterIsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // al
  bool v7; // al
  enum DXGI_COLOR_SPACE_TYPE v8; // r11d
  char v9; // r9
  enum DXGI_COLOR_SPACE_TYPE v10; // r10d
  bool v11; // al
  int v12; // r10d
  int v13; // r11d
  char v14; // r8
  __int64 v15; // rax
  enum DXGI_FORMAT *v16; // rax
  unsigned int ColorChannelDepth; // ebx
  __int64 v18; // rax
  enum DXGI_FORMAT *v19; // rax
  unsigned int v20; // eax
  bool IsRevokable; // bl
  bool v22; // al
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _BYTE v26[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 144LL))(*((_QWORD *)this + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 144LL))(*((_QWORD *)a2 + 2));
  if ( v4 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0;
  }
  if ( !CDeviceManager::s_bXbox )
    goto LABEL_20;
  IsDXGIColorSpaceRec2020(*((enum DXGI_COLOR_SPACE_TYPE *)this + 27));
  v7 = IsDXGIColorSpaceRec2020(*((enum DXGI_COLOR_SPACE_TYPE *)a2 + 27));
  if ( v9 )
  {
    if ( !v7 )
      return 1;
  }
  else if ( v7 )
  {
    return 0;
  }
  IsDXGIColorSpaceStudio(v8);
  v11 = IsDXGIColorSpaceStudio(v10);
  if ( v14 )
  {
    if ( !v11 )
      return 1;
  }
  else if ( v11 )
  {
    return 0;
  }
  if ( !v13 )
  {
    if ( !v12 )
      goto LABEL_18;
    return 0;
  }
  if ( !v12 )
    return 1;
LABEL_18:
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
  v16 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 24LL))(v15, v26);
  ColorChannelDepth = GetColorChannelDepth(*v16);
  v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 48LL))(*((_QWORD *)a2 + 2));
  v19 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, v26);
  v20 = GetColorChannelDepth(*v19);
  if ( ColorChannelDepth > v20 )
    return 1;
  if ( ColorChannelDepth < v20 )
    return 0;
LABEL_20:
  IsRevokable = COverlayContext::OverlayPlaneInfo::IsRevokable(this);
  v22 = COverlayContext::OverlayPlaneInfo::IsRevokable(a2);
  if ( IsRevokable )
  {
    if ( !v22 )
      return 0;
  }
  else if ( v22 )
  {
    return 1;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 160LL))(*((_QWORD *)this + 2));
  v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 160LL))(*((_QWORD *)a2 + 2));
  if ( v23 < v24 )
    return 1;
  if ( v23 > v24 )
    return 0;
  v25 = *((_QWORD *)this + 44);
  if ( v25 > *((_QWORD *)a2 + 44) )
    return 1;
  if ( v25 < *((_QWORD *)a2 + 44) )
    return 0;
  if ( *((_BYTE *)this + 368) )
    return 1;
  return *((_BYTE *)a2 + 368) == 0;
}
