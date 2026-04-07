/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7F04
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800504B0 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800A65E0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180033F9C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800382A8 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18004EEDC (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18005022C (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x1800AD7CC (--$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x1800ADA1C (--$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800ADB44 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(CAnimatedTransitionVisual *this)
{
  unsigned int v2; // ebx
  volatile signed __int32 *v3; // rsi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int64 *v10; // r14
  int v11; // eax
  int v12; // eax
  int inserted; // eax
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v3 = 0LL;
  if ( !*((_QWORD *)this + 84) )
  {
    v4 = CCompositor::CreateProxy<CEffectGroupProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (__int64 *)this + 84);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5A1u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v5 = CCompositor::CreateProxy<CScaleTransformProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (CBaseObject **)this + 85);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5A6u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v6 = CCompositor::CreateProxy<CTranslateTransformProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (char *)this + 688);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x5ABu);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 87) )
  {
    v7 = CCompositor::CreateProxy<CRotateTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5B0u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 88) )
  {
    v8 = CCompositor::CreateProxy<CTransformGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5B5u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 89) )
  {
    v9 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (CBaseObject **)this + 89);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x5BAu);
      return v2;
    }
  }
  v10 = (unsigned __int64 *)((char *)this + 728);
  if ( *((_QWORD *)this + 91) )
    return v2;
  v11 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 91);
  v2 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5BFu);
    return v2;
  }
  if ( *((_BYTE *)this + 975) )
  {
    v3 = (volatile signed __int32 *)**((_QWORD **)this + 7);
    if ( v3 )
    {
      _InterlockedIncrement(v3 + 2);
      v12 = VisualCollection::Remove((CAnimatedTransitionVisual *)((char *)this + 40), (struct CVisual *)v3);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x5C7u);
        goto LABEL_33;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*v10 + 32), (unsigned __int64)v3, 0LL, 0, v16);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x5C8u);
LABEL_33:
        CBaseObject::Release((CBaseObject *)v3);
        return v2;
      }
    }
  }
  v14 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), *v10, 0LL, 0, v16);
  v2 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x5CCu);
  if ( v3 )
    goto LABEL_33;
  return v2;
}
