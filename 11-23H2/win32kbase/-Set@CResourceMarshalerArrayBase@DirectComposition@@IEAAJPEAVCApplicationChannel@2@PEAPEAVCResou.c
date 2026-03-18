/*
 * XREFs of ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C002C410
 * Callers:
 *     ?SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C000E040 (-SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetReferenceArrayProperty@CAnimationControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00AA9D0 (-SetReferenceArrayProperty@CAnimationControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicatio.c)
 *     ?SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00C34B0 (-SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C02142D0 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceArrayProperty@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021E4F0 (-SetReferenceArrayProperty@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 *     ?SetReferenceArrayProperty@CGeometry2DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021E550 (-SetReferenceArrayProperty@CGeometry2DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021E5B0 (-SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicat.c)
 *     ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021E630 (-SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021E6C0 (-SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetReferenceArrayProperty@CTransform3DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021E790 (-SetReferenceArrayProperty@CTransform3DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceArrayProperty@CVisualGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021E7F0 (-SetReferenceArrayProperty@CVisualGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002C3A8 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshalerArrayBase::Set(
        DirectComposition::CResourceMarshalerArrayBase *a1,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rsi

  v6 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( a4 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a3 + 8 * v10);
      if ( !v11
        || !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *(unsigned int *)(v11 + 36),
                               a5) )
      {
        return (unsigned int)-1073741811;
      }
      v10 = v12 + 1;
      if ( v10 >= a4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    DirectComposition::CResourceMarshalerArrayBase::Clear(a1, v8);
    DirectComposition::CMarshaledArrayBase::Clear(a1);
    *((_QWORD *)a1 + 1) = a3;
    v13 = 0LL;
    for ( *((_QWORD *)a1 + 2) = a4; v13 < *((_QWORD *)a1 + 2); ++v13 )
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)a1 + 1)
                                                                                              + 8 * v13));
  }
  return v6;
}
