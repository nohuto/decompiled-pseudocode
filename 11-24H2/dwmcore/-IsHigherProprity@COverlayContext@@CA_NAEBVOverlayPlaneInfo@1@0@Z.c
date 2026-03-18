/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18005E9A0
 * Callers:
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18005E3CC (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 *     ?FindHighestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180232954 (-FindHighestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@CO.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005DA50 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsOverlayRequired@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18005EB50 (-IsOverlayRequired@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18010BF00 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18026C64C (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::IsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *a1,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  CGlobalCompositionSurfaceInfo *v3; // rcx
  __int64 (*v5)(void); // rax
  char IsOverlayRequired; // al
  CGlobalCompositionSurfaceInfo *v7; // rcx
  char v8; // si
  __int64 (*v9)(void); // rax
  char v10; // al
  bool v11; // r10
  char v12; // al
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  bool v18; // al
  char v19; // r9
  bool v20; // al
  int v21; // r9d
  char v22; // r8
  __int64 v23; // rax
  enum DXGI_FORMAT *v24; // rax
  unsigned int ColorChannelDepth; // esi
  __int64 v26; // rax
  enum DXGI_FORMAT *v27; // rax
  unsigned int v28; // eax
  _BYTE v29[16]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)a1 + 2);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v3 + 144LL);
  if ( (char *)v5 == (char *)CGlobalCompositionSurfaceInfo::IsOverlayRequired )
    IsOverlayRequired = CGlobalCompositionSurfaceInfo::IsOverlayRequired(v3);
  else
    IsOverlayRequired = v5();
  v7 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)a2 + 2);
  v8 = IsOverlayRequired;
  v9 = *(__int64 (**)(void))(*(_QWORD *)v7 + 144LL);
  if ( (char *)v9 == (char *)CGlobalCompositionSurfaceInfo::IsOverlayRequired )
    v10 = CGlobalCompositionSurfaceInfo::IsOverlayRequired(v7);
  else
    v10 = v9();
  if ( v8 )
  {
    if ( !v10 )
      return 1;
  }
  else if ( v10 )
  {
    return 0;
  }
  v11 = CDeviceManager::s_bXbox;
  if ( CDeviceManager::s_bXbox )
  {
    IsDXGIColorSpaceRec2020(*((enum DXGI_COLOR_SPACE_TYPE *)a1 + 27));
    v18 = IsDXGIColorSpaceRec2020(*((enum DXGI_COLOR_SPACE_TYPE *)a2 + 27));
    if ( v19 )
    {
      if ( !v18 )
        return 1;
    }
    else if ( v18 )
    {
      return 0;
    }
  }
  v12 = *((_BYTE *)a2 + 364);
  if ( *((_BYTE *)a1 + 364) )
  {
    if ( !v12 )
      return 1;
  }
  else if ( v12 )
  {
    return 0;
  }
  if ( v11 )
  {
    IsDXGIColorSpaceStudio(*((enum DXGI_COLOR_SPACE_TYPE *)a1 + 27));
    v20 = IsDXGIColorSpaceStudio(*((enum DXGI_COLOR_SPACE_TYPE *)a2 + 27));
    if ( v22 )
    {
      if ( !v20 )
        return 1;
    }
    else if ( v20 )
    {
      return 0;
    }
    if ( *((_DWORD *)a1 + 27) )
    {
      if ( !v21 )
        return 1;
    }
    else if ( v21 )
    {
      return 0;
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 48LL))(*((_QWORD *)a1 + 2));
    v24 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 24LL))(v23, v29);
    ColorChannelDepth = GetColorChannelDepth(*v24);
    v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 48LL))(*((_QWORD *)a2 + 2));
    v27 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 24LL))(v26, v29);
    v28 = GetColorChannelDepth(*v27);
    if ( ColorChannelDepth > v28 )
      return 1;
    if ( ColorChannelDepth < v28 )
      return 0;
  }
  v13 = (*((_DWORD *)a1 + 19) - *((_DWORD *)a1 + 17)) * (*((_DWORD *)a1 + 20) - *((_DWORD *)a1 + 18));
  v14 = (*((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17)) * (*((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18));
  if ( v13 > v14 )
    return 1;
  if ( v13 < v14 )
    return 0;
  v15 = (*((_DWORD *)a1 + 11) - *((_DWORD *)a1 + 9)) * (*((_DWORD *)a1 + 12) - *((_DWORD *)a1 + 10));
  v16 = (*((_DWORD *)a2 + 11) - *((_DWORD *)a2 + 9)) * (*((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10));
  if ( v15 > v16 )
    return 1;
  if ( v15 < v16 || !*((_BYTE *)a1 + 367) )
    return 0;
  return *((_BYTE *)a2 + 367) == 0;
}
