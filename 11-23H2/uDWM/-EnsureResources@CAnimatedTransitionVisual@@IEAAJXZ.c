/*
 * XREFs of ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800504B0
 * Callers:
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x18001F1B0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800503D0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180054C9C (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A62F4 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A6F9C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18004D7CC (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18004FEDC (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18004FFAC (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A6A48 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7F04 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EnsureResources(CAnimatedTransitionVisual *this)
{
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( *((_BYTE *)this + 975) )
    goto LABEL_7;
  if ( !*((_QWORD *)this + 73) )
  {
    v4 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (CBaseObject **)this + 73);
    v2 = v4;
    if ( v4 < 0 )
    {
      v6 = 978;
      goto LABEL_19;
    }
  }
  if ( !*((_QWORD *)this + 74) )
  {
    v4 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (CBaseObject **)this + 74);
    v2 = v4;
    if ( v4 < 0 )
    {
      v6 = 983;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v6, 0LL);
      return v2;
    }
  }
  if ( !*((_BYTE *)this + 976) )
  {
    if ( *((_BYTE *)this + 984) )
    {
      v4 = CAnimatedTransitionVisual::Ensure3DResources(this);
      v2 = v4;
      if ( v4 < 0 )
      {
        v6 = 990;
        goto LABEL_19;
      }
    }
    else
    {
      v2 = 0;
      if ( !*((_QWORD *)this + 42) )
      {
        v5 = CCompositor::CreateProxy<CMatrixTransformProxy>(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
               (CBaseObject **)this + 42);
        v2 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x422u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x3E2u, 0LL);
          return v2;
        }
      }
    }
LABEL_7:
    if ( !*((_BYTE *)this + 976) )
      return v2;
  }
  v4 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  v2 = v4;
  if ( v4 < 0 )
  {
    v6 = 1002;
    goto LABEL_19;
  }
  return v2;
}
