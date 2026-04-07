/*
 * XREFs of ??$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x18006A380
 * Callers:
 *     ?CreateLinearGradientLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x1800977D4 (-CreateLinearGradientLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCLinearGradientLegacyMilBrushP.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseTransformProxy@@QEAA@XZ @ 0x18006A620 (--0CBaseTransformProxy@@QEAA@XZ.c)
 *     ?Initialize@CLinearGradientLegacyMilBrushProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x18006A6DC (-Initialize@CLinearGradientLegacyMilBrushProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CLinearGradientLegacyMilBrushProxy>(__int64 a1, CBaseTransformProxy **a2)
{
  CBaseTransformProxy *v4; // rbx
  unsigned int v5; // edi
  CLinearGradientLegacyMilBrushProxy *v7; // rcx
  int v8; // eax

  *a2 = 0LL;
  v4 = (CBaseTransformProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    CBaseTransformProxy::CBaseTransformProxy(v4);
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    CMILRefCountBase::AddRef(v4);
    v8 = CLinearGradientLegacyMilBrushProxy::Initialize(v7, *(struct IDwmChannel **)(a1 + 24));
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6Fu, 0LL);
    }
    else
    {
      *a2 = v4;
      v5 = 0;
    }
  }
  else
  {
    v4 = 0LL;
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du, 0LL);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v5;
}
