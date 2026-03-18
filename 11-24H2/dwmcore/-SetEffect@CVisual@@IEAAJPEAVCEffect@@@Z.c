/*
 * XREFs of ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800392E8
 * Callers:
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800391DC (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180038C40 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AE5D0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1801F013C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1801F97BC (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 */

__int64 __fastcall CVisual::SetEffect(CVisual *this, struct CEffect *a2)
{
  unsigned int v4; // esi
  struct CResource *EffectInternal; // rbp
  struct CTransform3D *Transform3DEffectNoRef; // r14
  int v7; // eax
  bool v8; // bl

  v4 = 0;
  EffectInternal = CVisual::GetEffectInternal(this);
  if ( a2 != EffectInternal )
  {
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
    v7 = CResource::RegisterNotifier(this, a2);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xA58u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, EffectInternal);
      CVisual::SetEffectInternal(this, a2);
      v8 = Transform3DEffectNoRef != 0LL;
      if ( CVisual::GetTransform3DEffectNoRef(this) )
        v8 = 1;
      CVisual::PropagateFlags(this, 5LL);
      if ( v8 )
        CVisual::OnInnerTransformChanged(this);
    }
  }
  return v4;
}
