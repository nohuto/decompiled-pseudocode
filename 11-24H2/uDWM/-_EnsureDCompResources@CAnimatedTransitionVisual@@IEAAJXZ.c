/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180048910
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800176CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800484B0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180015B0C (-CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003931C (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18003E3A0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180049160 (-CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?CreateRotateTransformProxy@CCompositor@@QEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x1800B6204 (-CreateRotateTransformProxy@CCompositor@@QEAAJPEAPEAVCRotateTransformProxy@@@Z.c)
 *     ?CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x1800B621C (-CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 *     ?CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800B6228 (-CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(struct CEffectGroupProxy **this)
{
  unsigned int v2; // ebx
  struct CVisual *v3; // rsi
  int ScaleTransformProxy; // eax
  CContainerVisual **v5; // r14
  int v6; // eax
  int v7; // eax
  int EffectGroupProxy; // eax
  int TranslateTransformProxy; // eax
  int RotateTransformProxy; // eax
  int TransformGroupProxy; // eax
  int RectangleGeometryProxy; // eax
  CMILRefCountBase **v14; // rax
  int v15; // eax
  int v16; // eax

  v2 = 0;
  v3 = 0LL;
  if ( !this[78] )
  {
    EffectGroupProxy = CCompositor::CreateEffectGroupProxy(
                         *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                         this + 78);
    v2 = EffectGroupProxy;
    if ( EffectGroupProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, EffectGroupProxy, 0x59Bu, 0LL);
      return v2;
    }
  }
  if ( !this[79] )
  {
    ScaleTransformProxy = CCompositor::CreateScaleTransformProxy(
                            *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                            this + 79);
    v2 = ScaleTransformProxy;
    if ( ScaleTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ScaleTransformProxy, 0x5A0u, 0LL);
      return v2;
    }
  }
  if ( !this[80] )
  {
    TranslateTransformProxy = CCompositor::CreateTranslateTransformProxy(
                                *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                this + 80);
    v2 = TranslateTransformProxy;
    if ( TranslateTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, TranslateTransformProxy, 0x5A5u, 0LL);
      return v2;
    }
  }
  if ( !this[81] )
  {
    RotateTransformProxy = CCompositor::CreateRotateTransformProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             this + 81);
    v2 = RotateTransformProxy;
    if ( RotateTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RotateTransformProxy, 0x5AAu, 0LL);
      return v2;
    }
  }
  if ( !this[82] )
  {
    TransformGroupProxy = CCompositor::CreateTransformGroupProxy(
                            *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                            this + 82);
    v2 = TransformGroupProxy;
    if ( TransformGroupProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, TransformGroupProxy, 0x5AFu, 0LL);
      return v2;
    }
  }
  if ( !this[83] )
  {
    RectangleGeometryProxy = CCompositor::CreateRectangleGeometryProxy(
                               *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                               this + 83);
    v2 = RectangleGeometryProxy;
    if ( RectangleGeometryProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometryProxy, 0x5B4u, 0LL);
      return v2;
    }
  }
  v5 = this + 85;
  if ( !this[85] )
  {
    v6 = CRenderDataVisual::Create(this + 85);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x5B9u, 0LL);
      return v2;
    }
    if ( *((_BYTE *)this + 927) )
    {
      v14 = (CMILRefCountBase **)this[20];
      v3 = *v14;
      if ( *v14 )
      {
        CMILRefCountBase::AddRef(*v14);
        v15 = CContainerVisual::RemoveChild((CContainerVisual *)(this + 1), v3);
        v2 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x5C1u, 0LL);
          goto LABEL_32;
        }
        v16 = CContainerVisual::AddChild(*v5, v3);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x5C2u, 0LL);
LABEL_32:
          CBaseObject::Release(v3);
          return v2;
        }
      }
    }
    v7 = CContainerVisual::AddChild((CContainerVisual *)(this + 1), *v5);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5C6u, 0LL);
    if ( v3 )
      goto LABEL_32;
  }
  return v2;
}
