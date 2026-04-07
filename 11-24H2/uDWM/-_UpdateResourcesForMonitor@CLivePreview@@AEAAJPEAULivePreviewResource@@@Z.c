/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180003D00
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800C7EBC (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800C7FB0 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x1800031FC (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800057E8 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18002F428 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A524 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18003CB6C (-Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PE.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003CC30 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18003CC3C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18003CD78 (-CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800777B0 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int i; // esi
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int RectangleGeometry; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int ImageLegacyMilBrushProxy; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // r9d
  int v25; // ecx
  int v26; // r8d
  int v27; // eax
  int CachedVisualImageProxy; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  int GeometryFromHRGN; // eax
  struct CRectangleGeometryProxy **v40; // [rsp+20h] [rbp-49h]
  struct CRectangleGeometryProxy **v41; // [rsp+20h] [rbp-49h]
  int v42; // [rsp+70h] [rbp+7h] BYREF
  int v43; // [rsp+74h] [rbp+Bh]
  __int128 v44; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v45; // [rsp+88h] [rbp+1Fh] BYREF

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  SetRectEmpty((LPRECT)((char *)a2 + 40));
  SetRectEmpty((LPRECT)a2 + 5);
  *((_QWORD *)a2 + 12) = CreateRectRgn(0, 0, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 72); ++i )
  {
    v6 = *(CLivePreview **)(*((_QWORD *)this + 33) + 40LL * i);
    v7 = (const struct CTopLevelWindow *)*((_QWORD *)v6 + 55);
    if ( v7 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitorHelper(v6, v7, a2);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x4A9u, 0LL);
        return v3;
      }
    }
  }
  *((_BYTE *)a2 + 128) = !IsRectEmpty((const RECT *)a2);
  *((_BYTE *)a2 + 129) = !IsRectEmpty((const RECT *)((char *)a2 + 40));
  if ( !*((_BYTE *)a2 + 128) )
    goto LABEL_29;
  v9 = 0;
  v10 = *((_DWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 3) - v10 >= 0 )
    v9 = *((_DWORD *)a2 + 3) - v10;
  v11 = 0;
  if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 >= 0 )
    v11 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        *(_DWORD *)a2,
                        v10,
                        v11,
                        v9,
                        (struct CRectangleGeometryProxy **)a2 + 2);
  v3 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x4B8u, 0LL);
    return v3;
  }
  if ( *((_QWORD *)a2 + 3)
    || (v13 = CCompositor::CreateCachedVisualImageProxy(
                *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                (struct CCachedVisualImageProxy **)a2 + 3),
        v3 = v13,
        v13 >= 0) )
  {
    v14 = 0LL;
    v44 = 0LL;
    do
    {
      *((float *)&v44 + v14) = (float)*((int *)a2 + v14);
      ++v14;
    }
    while ( v14 < 4 );
    v15 = *((_QWORD *)a2 + 3);
    v16 = *(_QWORD *)(*((_QWORD *)this + 53) + 16LL);
    v42 = 0;
    v43 = 0;
    v17 = CCachedVisualImageProxy::Update(v15, &v44, &v42, 0LL, 0LL, v16, 0);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x4CBu, 0LL);
      return v3;
    }
    v18 = CCachedVisualImageProxy::Freeze(*((CCachedVisualImageProxy **)a2 + 3));
    v3 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x4CDu, 0LL);
      return v3;
    }
    if ( !*((_QWORD *)a2 + 4) )
    {
      ImageLegacyMilBrushProxy = CCompositor::CreateImageLegacyMilBrushProxy(
                                   *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                   (struct CImageLegacyMilBrushProxy **)a2 + 4);
      v3 = ImageLegacyMilBrushProxy;
      if ( ImageLegacyMilBrushProxy < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ImageLegacyMilBrushProxy, 0x4D1u, 0LL);
        return v3;
      }
    }
    v21 = *((_QWORD *)a2 + 4);
    v40 = (struct CRectangleGeometryProxy **)*((_QWORD *)this + 50);
    v45 = _xmm;
    v44 = _xmm;
    v22 = CImageLegacyMilBrushProxy::Update(v21, v19, &v45, &v44, v40, 1, 1, 0LL, 0LL, 0);
    v3 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x4ECu, 0LL);
      return v3;
    }
LABEL_29:
    if ( *((_BYTE *)a2 + 129) )
    {
      v23 = *((_DWORD *)a2 + 11);
      v24 = 0;
      v25 = *((_DWORD *)a2 + 10);
      if ( *((_DWORD *)a2 + 13) - v23 >= 0 )
        v24 = *((_DWORD *)a2 + 13) - v23;
      v26 = 0;
      if ( *((_DWORD *)a2 + 12) - v25 >= 0 )
        v26 = *((_DWORD *)a2 + 12) - v25;
      v27 = ResourceHelper::CreateRectangleGeometry(v25, v23, v26, v24, (struct CRectangleGeometryProxy **)a2 + 7);
      v3 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x4F6u, 0LL);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 8) )
      {
        CachedVisualImageProxy = CCompositor::CreateCachedVisualImageProxy(
                                   *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                   (struct CCachedVisualImageProxy **)a2 + 8);
        v3 = CachedVisualImageProxy;
        if ( CachedVisualImageProxy < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CachedVisualImageProxy, 0x4FAu, 0LL);
          return v3;
        }
      }
      v29 = 0LL;
      v44 = 0LL;
      do
      {
        *((float *)&v44 + v29) = (float)*((int *)a2 + v29 + 10);
        ++v29;
      }
      while ( v29 < 4 );
      v30 = *((_QWORD *)a2 + 8);
      v31 = *(_QWORD *)(*((_QWORD *)this + 55) + 16LL);
      v42 = 0;
      v43 = 0;
      v32 = CCachedVisualImageProxy::Update(v30, &v44, &v42, 0LL, 0LL, v31, 0);
      v3 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x509u, 0LL);
        return v3;
      }
      v33 = CCachedVisualImageProxy::Freeze(*((CCachedVisualImageProxy **)a2 + 8));
      v3 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x50Bu, 0LL);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 9) )
      {
        v35 = CCompositor::CreateImageLegacyMilBrushProxy(
                *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                (struct CImageLegacyMilBrushProxy **)a2 + 9);
        v3 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x50Fu, 0LL);
          return v3;
        }
      }
      v36 = *((_QWORD *)a2 + 9);
      v41 = (struct CRectangleGeometryProxy **)*((_QWORD *)this + 51);
      v45 = _xmm;
      v44 = _xmm;
      v37 = CImageLegacyMilBrushProxy::Update(v36, v34, &v45, &v44, v41, 1, 1, 0LL, 0LL, 0);
      v3 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x52Au, 0LL);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(
                           *((HRGN *)a2 + 12),
                           (struct CRgnGeometryProxy **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GeometryFromHRGN, 0x52Cu, 0LL);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((char *)a2 + 96);
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4BCu, 0LL);
  return v3;
}
