/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001E130 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800280B0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x1800351B0 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180048D00 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x180072760 (-ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x1800772F0 (-ValidateVisual@CWindowBorder@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800784DC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180078F10 (-SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBorderMode@CVisualProxy@@QEAAJW4Enum@MilBitmapBorderMode@@@Z @ 0x18007F2D4 (-SetBorderMode@CVisualProxy@@QEAAJW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  int v1; // eax
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // edi
  int updated; // eax
  unsigned int v15; // edi
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 8);
  if ( (v1 & 2) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(CVisual *, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v4,
        v16);
      return v5;
    }
    *((_DWORD *)this + 8) &= ~2u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 8) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL))(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v6,
        v16);
      return v7;
    }
    *((_DWORD *)this + 8) &= ~8u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    v15 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)updated,
        v16);
      return v15;
    }
    *((_DWORD *)this + 8) &= ~0x10u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 144LL))(this);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v8,
        v16);
      return v9;
    }
    *((_DWORD *)this + 8) &= ~0x20u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v12 = CVisualProxy::SetBorderMode(*((_QWORD *)this + 2), *((unsigned int *)this + 34));
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v12,
        v16);
      return v13;
    }
    *((_DWORD *)this + 8) &= ~0x80u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x40) == 0 )
    return 0LL;
  v10 = CVisualProxy::SetInterpolationMode(*((_QWORD *)this + 2), *((unsigned int *)this + 33));
  v11 = v10;
  if ( v10 >= 0 )
  {
    *((_DWORD *)this + 8) &= ~0x40u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v10,
    v16);
  return v11;
}
