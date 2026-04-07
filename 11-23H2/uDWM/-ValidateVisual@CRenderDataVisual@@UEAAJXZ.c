/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180050710
 * Callers:
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18000A760 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18001C080 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800503D0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ @ 0x180050590 (-ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180050650 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180050A10 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18006EB00 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800A3B00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800C2630 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800D5930 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CSolidRectangleVisual@@UEAAJXZ @ 0x1800D89C0 (-ValidateVisual@CSolidRectangleVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1801058F8 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int updated; // eax
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 2) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(CRenderDataVisual *, _QWORD))(*(_QWORD *)this + 96LL))(this, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      v10 = (unsigned int)v3;
      v11 = 129LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~2u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 8) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 184LL))(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 136LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~8u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = (unsigned int)updated;
      v11 = 143LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~0x10u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 168LL))(this);
    v4 = v13;
    if ( v13 < 0 )
    {
      v10 = (unsigned int)v13;
      v11 = 150LL;
      goto LABEL_25;
    }
    *((_DWORD *)this + 22) &= ~0x20u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x40) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                           + 352LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
           (char *)this + 204);
    v4 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~0x40u;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3B1u, 0LL);
    v10 = v4;
    v11 = 157LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)v10,
      v14);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)v4,
      v15);
    return v4;
  }
LABEL_8:
  if ( (*((_BYTE *)this + 88) & 4) == 0 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 208LL))(this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 22) &= ~4u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v5,
    v14);
  return v6;
}
