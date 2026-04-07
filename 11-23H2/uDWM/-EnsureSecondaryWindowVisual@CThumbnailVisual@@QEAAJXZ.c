/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009C74
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18000D078 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18000D57C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001C16C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18001DF38 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001DFC4 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E0C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18004D01C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800E4B0C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CThumbnailVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int inserted; // eax
  int v7; // eax
  CThumbnailVisual *v8; // rcx
  int v9; // ecx
  int v10; // eax
  double v11; // xmm5_8
  double v12; // xmm7_8
  double v13; // xmm9_8
  double v14; // xmm6_8
  __int64 v15; // rcx
  LONG v16; // esi
  LONG v17; // ebp
  CVisual *v18; // rcx
  int v20; // eax
  double v21; // xmm1_8
  double v22; // xmm1_8
  struct CBaseGeometryProxy *v23; // rdx
  int RectangleGeometry; // eax
  int v25; // eax
  bool v26; // [rsp+20h] [rbp-68h]
  struct tagPOINT v27; // [rsp+90h] [rbp+8h] BYREF

  v2 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x31Au, 0LL);
  }
  else if ( *((_BYTE *)this + 480) )
  {
    v4 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x31Eu, 0LL);
    }
    else
    {
      v5 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 48));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x31Fu, 0LL);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (CThumbnailVisual *)((char *)this + 32),
                     *(struct CVisual **)(*((_QWORD *)this + 48) + 48LL),
                     0LL,
                     0,
                     v26);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x320u, 0LL);
        }
        else
        {
          v7 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 48));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x321u, 0LL);
          }
          else if ( CThumbnailVisual::_HasBorder(this)
                 && (v20 = CThumbnailVisual::_AddBorderInstructions(v8), v3 = v20, v20 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x324u, 0LL);
          }
          else
          {
            *((_DWORD *)this + 22) &= ~0x80u;
            v9 = *((_DWORD *)this + 133);
            if ( v9 )
            {
              v10 = *((_DWORD *)this + 134);
              if ( v10 )
              {
                v11 = (double)*((int *)this + 129);
                v12 = v11 / (double)v9;
                v13 = (double)*((int *)this + 130);
                v14 = v13 / (double)v10;
                if ( (*(_DWORD *)(*((_QWORD *)this + 47) + 36LL) & 0x100000) != 0 && *((_BYTE *)this + 482) )
                {
                  v21 = *((double *)this + 61);
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v21 - 0.0) & _xmm) > 0.0000011920929 )
                    v12 = v11 / v21;
                  else
                    v12 = 0.0;
                  v22 = *((double *)this + 62);
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v22 - 0.0) & _xmm) > 0.0000011920929 )
                    v14 = v13 / v22;
                  else
                    v14 = 0.0;
                }
                CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 48) + 48LL), v12, v14);
                v15 = *((_QWORD *)this + 48);
                v16 = *((_DWORD *)this + 127);
                v17 = *((_DWORD *)this + 128);
                v27.x = v16;
                v18 = *(CVisual **)(v15 + 48);
                v27.y = v17;
                CVisual::SetOffset(v18, &v27);
                if ( !*(_BYTE *)(*((_QWORD *)this + 47) + 34LL) )
                {
                  if ( v12 == 1.0 && v14 == 1.0 )
                    CVisual::ClearInterpolationMode(this);
                  else
                    CVisual::SetInterpolationMode(this, 6LL);
                }
                if ( !*(_BYTE *)(*((_QWORD *)this + 47) + 34LL) )
                {
                  v23 = 0LL;
                  if ( v14 != 0.0 && v12 != 0.0 )
                  {
                    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                          _mm_cvtsi128_si32(*(__m128i *)((char *)this + 540)) - v16,
                                          HIDWORD(*(_QWORD *)((char *)this + 540)) - v17,
                                          (int)((double)(int)*(_QWORD *)((char *)this + 548) / v12 + 0.5),
                                          (int)((double)(int)HIDWORD(*(_OWORD *)((char *)this + 540)) / v14 + 0.5),
                                          (struct CRectangleGeometryProxy **)this + 56);
                    v3 = RectangleGeometry;
                    if ( RectangleGeometry < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x351u, 0LL);
                      return v3;
                    }
                    v23 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 56);
                  }
                  v25 = CVisualProxy::SetClip(
                          *(CVisualProxy **)(*(_QWORD *)(*((_QWORD *)this + 48) + 48LL) + 16LL),
                          v23);
                  v3 = v25;
                  if ( v25 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x355u, 0LL);
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
