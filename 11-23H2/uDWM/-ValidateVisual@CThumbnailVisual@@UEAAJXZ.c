/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009C74 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000CDB0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000D4E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000D6CC (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D7AC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000DA60 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000DB8C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000DBF0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x18000DF40 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180017DD0 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18001DF38 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E0C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180050710 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(CThumbnailVisual *this)
{
  int v1; // eax
  int updated; // edi
  CSecondaryWindowRepresentation *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  CSecondaryWindowRepresentation *v9; // rcx
  __int64 v11; // rcx
  CBaseObject *v12; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x2000) != 0 )
  {
    updated = CThumbnailVisual::EnsureVisualBrush(this);
    if ( updated < 0 )
    {
      v13 = 62LL;
      goto LABEL_43;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 22) &= ~0x2000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v4 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 48);
    if ( v4 )
    {
      updated = CSecondaryWindowRepresentation::Validate(v4);
      if ( updated < 0 )
      {
        v13 = 73LL;
        goto LABEL_43;
      }
    }
    *((_DWORD *)this + 22) &= ~0x80u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect(this);
    if ( updated < 0 )
    {
      v13 = 81LL;
      goto LABEL_43;
    }
    *((_DWORD *)this + 22) &= ~0x4000u;
  }
  updated = CRenderDataVisual::UpdateLayout(this, 0);
  if ( updated < 0 )
  {
    v13 = 86LL;
    goto LABEL_43;
  }
  v5 = *((_DWORD *)this + 22);
  if ( (v5 & 0x1000) != 0 )
  {
    updated = CThumbnailVisual::UpdateDestinationRect(this);
    if ( updated < 0 )
    {
      v13 = 93LL;
      goto LABEL_43;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 22) &= ~0x1000u;
    v5 = *((_DWORD *)this + 22);
  }
  if ( (v5 & 0x8000) != 0 )
  {
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( (*((_DWORD *)this + 22) & 0x10000) != 0 )
      {
        updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        if ( updated < 0 )
        {
          v13 = 105LL;
          goto LABEL_43;
        }
        updated = CRenderDataVisual::ClearInstructions(this);
        if ( updated < 0 )
        {
          v13 = 106LL;
          goto LABEL_43;
        }
        v12 = (CBaseObject *)*((_QWORD *)this + 48);
        if ( v12 )
        {
          CBaseObject::Release(v12);
          *((_QWORD *)this + 48) = 0LL;
        }
        *((_BYTE *)this + 482) = 0;
        updated = CThumbnailVisual::EnsureVisualBrush(this);
        if ( updated < 0 )
        {
          v13 = 109LL;
          goto LABEL_43;
        }
        updated = CThumbnailVisual::UpdateSourceRect(this);
        if ( updated < 0 )
        {
          v13 = 110LL;
          goto LABEL_43;
        }
        updated = CThumbnailVisual::UpdateDestinationRect(this);
        if ( updated < 0 )
        {
          v13 = 111LL;
          goto LABEL_43;
        }
        *((_DWORD *)this + 22) &= 0xFFFE8F7F;
      }
    }
    else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual(this) )
    {
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v13 = 121LL;
        goto LABEL_43;
      }
      updated = CThumbnailVisual::EnsureSecondaryWindowVisual(this);
      if ( updated < 0 )
      {
        v13 = 122LL;
        goto LABEL_43;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v11, &UdwmThumbnailVisualValidated_Info, 1LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v6, &UdwmThumbnailVisualValidated_Info, 0LL);
      updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
      if ( updated < 0 )
      {
        v13 = 128LL;
        goto LABEL_43;
      }
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v13 = 129LL;
        goto LABEL_43;
      }
      updated = CThumbnailVisual::EnsureVisualBrush(this);
      if ( updated < 0 )
      {
        v13 = 130LL;
        goto LABEL_43;
      }
      v7 = *((_QWORD *)this + 48);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
        {
          updated = CVisualProxy::SetClip(*(CVisualProxy **)(v8 + 16), 0LL);
          if ( updated < 0 )
          {
            v13 = 134LL;
LABEL_43:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v13,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
              (const char *)(unsigned int)updated,
              v14);
            return (unsigned int)updated;
          }
        }
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 47) + 34LL) )
        CVisual::ClearInterpolationMode(this);
    }
    *((_DWORD *)this + 22) &= ~0x8000u;
    v5 = *((_DWORD *)this + 22);
  }
  if ( (v5 & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 47) + 36LL) & 0x30000000) == 0x10000000 )
      CVisual::SetInterpolationMode(this, 6LL);
    else
      CVisual::ClearInterpolationMode(this);
    *((_DWORD *)this + 22) &= ~0x20000u;
  }
  updated = CRenderDataVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v13 = 165LL;
    goto LABEL_43;
  }
  if ( (*((_DWORD *)this + 22) & 0x40000) != 0 )
  {
    v9 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 48);
    if ( v9 )
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v9,
        *((struct CCachedVisualImageProxy **)this + 55),
        *((struct CImageLegacyMilBrushProxy **)this + 49),
        (CThumbnailVisual *)((char *)this + 508));
    *((_DWORD *)this + 22) &= ~0x40000u;
  }
  return 0LL;
}
