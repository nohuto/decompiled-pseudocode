/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800280B0
 * Callers:
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x1800109A0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800175E0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18003A750 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180065BA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x180068100 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ @ 0x180072370 (-ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18007C080 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18007D130 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18008F480 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800C53D0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800D0390 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CSolidRectangleVisual@@UEAAJXZ @ 0x1800D0E30 (-ValidateVisual@CSolidRectangleVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v2; // edi
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVisual::ValidateVisual(this);
  if ( v2 < 0 )
  {
    v4 = 142LL;
  }
  else
  {
    if ( (*((_BYTE *)this + 32) & 4) == 0 )
      return 0LL;
    v2 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 200LL))(this);
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 8) &= ~4u;
      return 0LL;
    }
    v4 = 146LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return (unsigned int)v2;
}
