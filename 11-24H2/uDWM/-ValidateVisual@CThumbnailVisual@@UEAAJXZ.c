/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001E410 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18001FD18 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180020B60 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800280B0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18003B9BC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18003BF40 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003E46C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z @ 0x18003E6CC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180067B90 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800792A8 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18007AF10 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(CThumbnailVisual *this)
{
  int v1; // eax
  int updated; // edi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  CSecondaryWindowRepresentation *v8; // rcx
  __int64 v10; // rdx
  CSecondaryWindowRepresentation *v11; // rcx
  __int64 v12; // rcx
  CBaseObject *v13; // rcx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 8);
  if ( (v1 & 0x2000) != 0 )
  {
    updated = CThumbnailVisual::EnsureVisualBrush(this);
    if ( updated < 0 )
    {
      v10 = 61LL;
      goto LABEL_28;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 8) &= ~0x2000u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x100) != 0 )
  {
    v11 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 42);
    if ( v11 )
    {
      updated = CSecondaryWindowRepresentation::Validate(v11);
      if ( updated < 0 )
      {
        v10 = 72LL;
        goto LABEL_28;
      }
    }
    *((_DWORD *)this + 8) &= ~0x100u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect(this);
    if ( updated < 0 )
    {
      v10 = 80LL;
      goto LABEL_28;
    }
    *((_DWORD *)this + 8) &= ~0x4000u;
  }
  updated = CRenderDataVisual::UpdateLayout(this, 0);
  if ( updated < 0 )
  {
    v10 = 85LL;
    goto LABEL_28;
  }
  v4 = *((_DWORD *)this + 8);
  if ( (v4 & 0x1000) != 0 )
  {
    updated = CThumbnailVisual::UpdateDestinationRect(this);
    if ( updated < 0 )
    {
      v10 = 92LL;
      goto LABEL_28;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 8) &= ~0x1000u;
    v4 = *((_DWORD *)this + 8);
  }
  if ( (v4 & 0x8000) != 0 )
  {
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( (*((_DWORD *)this + 8) & 0x10000) != 0 )
      {
        CContainerVisual::RemoveAllChildren(this);
        updated = CRenderDataVisual::ClearInstructions(this);
        if ( updated < 0 )
        {
          v10 = 105LL;
          goto LABEL_28;
        }
        v13 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v13 )
        {
          CBaseObject::Release(v13);
          *((_QWORD *)this + 42) = 0LL;
        }
        *((_BYTE *)this + 434) = 0;
        updated = CThumbnailVisual::EnsureVisualBrush(this);
        if ( updated < 0 )
        {
          v10 = 108LL;
          goto LABEL_28;
        }
        updated = CThumbnailVisual::UpdateSourceRect(this);
        if ( updated < 0 )
        {
          v10 = 109LL;
          goto LABEL_28;
        }
        updated = CThumbnailVisual::UpdateDestinationRect(this);
        if ( updated < 0 )
        {
          v10 = 110LL;
          goto LABEL_28;
        }
        *((_DWORD *)this + 8) &= 0xFFFE8EFF;
      }
    }
    else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual(this) )
    {
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v10 = 120LL;
        goto LABEL_28;
      }
      updated = CThumbnailVisual::EnsureSecondaryWindowVisual(this);
      if ( updated < 0 )
      {
        v10 = 121LL;
        goto LABEL_28;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v12, &UdwmThumbnailVisualValidated_Info, 1LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v5, &UdwmThumbnailVisualValidated_Info, 0LL);
      CContainerVisual::RemoveAllChildren(this);
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v10 = 128LL;
        goto LABEL_28;
      }
      updated = CThumbnailVisual::EnsureVisualBrush(this);
      if ( updated < 0 )
      {
        v10 = 129LL;
        goto LABEL_28;
      }
      v6 = *((_QWORD *)this + 42);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 48);
        if ( v7 )
        {
          updated = CVisualProxy::SetClip(*(CVisualProxy **)(v7 + 16), 0LL);
          if ( updated < 0 )
          {
            v10 = 133LL;
            goto LABEL_28;
          }
        }
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 41) + 34LL) )
        CVisual::ClearInterpolationMode(this);
    }
    *((_DWORD *)this + 8) &= ~0x8000u;
    v4 = *((_DWORD *)this + 8);
  }
  if ( (v4 & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 36LL) & 0x30000000) == 0x10000000 )
      CVisual::SetInterpolationMode(this, 6LL);
    else
      CVisual::ClearInterpolationMode(this);
    *((_DWORD *)this + 8) &= ~0x20000u;
  }
  updated = CRenderDataVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v10 = 164LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
      (const char *)(unsigned int)updated,
      v14);
    return (unsigned int)updated;
  }
  if ( (*((_DWORD *)this + 8) & 0x40000) != 0 )
  {
    v8 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 42);
    if ( v8 )
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v8,
        *((struct CCachedVisualImageProxy **)this + 49),
        *((struct CImageLegacyMilBrushProxy **)this + 43),
        (CThumbnailVisual *)((char *)this + 448));
    *((_DWORD *)this + 8) &= ~0x40000u;
  }
  return 0LL;
}
