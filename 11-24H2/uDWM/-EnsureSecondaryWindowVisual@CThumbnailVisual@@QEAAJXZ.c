/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800792A8
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001F550 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001F674 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x1800216C8 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A524 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003DE4C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003E46C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18007AF10 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18009743C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  CThumbnailVisual *v7; // rcx
  int v8; // ecx
  int v9; // eax
  float v10; // xmm4_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  __int64 v14; // rcx
  LONG v15; // esi
  LONG v16; // ebp
  struct tagPOINT *v17; // rcx
  struct CBaseGeometryProxy *v18; // rdx
  int RectangleGeometry; // eax
  int v20; // eax
  int v22; // eax
  struct tagPOINT v23; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  CContainerVisual::RemoveAllChildren(this);
  if ( *((_BYTE *)this + 432) )
  {
    v3 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v2 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x31Du, 0LL);
      return v2;
    }
    v4 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 42));
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x31Eu, 0LL);
      return v2;
    }
    v5 = CContainerVisual::AddChild(this, *(struct CVisual **)(*((_QWORD *)this + 42) + 48LL));
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x31Fu, 0LL);
      return v2;
    }
    v6 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 42));
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x320u, 0LL);
    }
    else if ( CThumbnailVisual::_HasBorder(this)
           && (v22 = CThumbnailVisual::_AddBorderInstructions(v7), v2 = v22, v22 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x323u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 8) &= ~0x100u;
      v8 = *((_DWORD *)this + 118);
      if ( v8 )
      {
        v9 = *((_DWORD *)this + 119);
        if ( v9 )
        {
          v10 = (float)*((int *)this + 114);
          v11 = v10 / (float)v8;
          v12 = (float)*((int *)this + 115);
          v13 = v12 / (float)v9;
          if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 36LL) & 0x100000) != 0 && *((_BYTE *)this + 434) )
          {
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 109) - 0.0) & _xmm) > 0.0000011920929 )
              v11 = v10 / *((float *)this + 109);
            else
              v11 = 0.0;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 110) - 0.0) & _xmm) > 0.0000011920929 )
              v13 = v12 / *((float *)this + 110);
            else
              v13 = 0.0;
          }
          CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 42) + 48LL), v11, v13);
          v14 = *((_QWORD *)this + 42);
          v15 = *((_DWORD *)this + 112);
          v16 = *((_DWORD *)this + 113);
          v23.x = v15;
          v17 = *(struct tagPOINT **)(v14 + 48);
          v23.y = v16;
          CVisual::SetOffset(v17, &v23);
          if ( !*(_BYTE *)(*((_QWORD *)this + 41) + 34LL) )
          {
            if ( v11 == 1.0 && v13 == 1.0 )
              CVisual::ClearInterpolationMode(this);
            else
              CVisual::SetInterpolationMode((__int64 *)this, 6);
          }
          if ( !*(_BYTE *)(*((_QWORD *)this + 41) + 34LL) )
          {
            v18 = 0LL;
            if ( v13 != 0.0 && v11 != 0.0 )
            {
              RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                    _mm_cvtsi128_si32(*((__m128i *)this + 30)) - v15,
                                    HIDWORD(*((_QWORD *)this + 60)) - v16,
                                    (int)((double)(int)*((_QWORD *)this + 61) / v11 + 0.5),
                                    (int)((double)(int)HIDWORD(*((_OWORD *)this + 30)) / v13 + 0.5),
                                    (struct CRectangleGeometryProxy **)this + 50);
              v2 = RectangleGeometry;
              if ( RectangleGeometry < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x350u, 0LL);
                return v2;
              }
              v18 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 50);
            }
            v20 = CVisualProxy::SetClip(*(CVisualProxy **)(*(_QWORD *)(*((_QWORD *)this + 42) + 48LL) + 16LL), v18);
            v2 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x354u, 0LL);
          }
        }
      }
    }
  }
  return v2;
}
