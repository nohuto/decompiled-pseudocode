/*
 * XREFs of ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x14007FF90
 * Callers:
 *     ?SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400717D0 (-SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetReferenceProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140071AC0 (-SetReferenceProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140071C70 (-SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140071FE0 (-SetReferenceProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 *     ?SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072060 (-SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072330 (-SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072460 (-SetReferenceProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400724F0 (-SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400725A0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072B90 (-SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCRe.c)
 *     ?SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072C10 (-SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler **a2,
        DirectComposition::CResourceMarshaler *a3,
        __int64 a4)
{
  int v4; // ebp

  v4 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      v4 = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)a3 + 8LL))(
             a3,
             this,
             a4);
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    if ( *a2 )
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)*a2 + 16LL))(
        *a2,
        this);
  }
  if ( a3 )
    DirectComposition::CResourceMarshaler::AddRef(a3);
  DirectComposition::CApplicationChannel::ReleaseResource(this, *a2);
  *a2 = a3;
  return (unsigned int)v4;
}
