/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0031090
 * Callers:
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C002C200 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00B9D90 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00BEF20 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0214AE0 (-SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C021ECD0 (-SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C021F1E0 (-SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C021F260 (-SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C022C450 (-SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C002D3BC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C002D3BC.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C00313FC (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     McTemplateK0qqqxx_EtwWriteTransfer @ 0x1C0214690 (McTemplateK0qqqxx_EtwWriteTransfer.c)
 */

int __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // ebx
  int v7; // r9d
  int v11; // r10d
  unsigned int v12; // r10d

  v5 = 0;
  v7 = a3;
  *a5 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4
        && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4 + 9),
                               187LL) )
      {
        return -1073741811;
      }
      if ( a4 != *((struct DirectComposition::CResourceMarshaler **)this + 17) )
      {
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 17));
        *((_QWORD *)this + 17) = a4;
        *((_DWORD *)this + 4) |= 0x100u;
        *a5 = 1;
      }
      return v5;
    case 4:
      goto LABEL_8;
    case 5:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 19,
               (unsigned int *)a4,
               1,
               56,
               (int *)this + 4,
               1024,
               0,
               a5);
    case 6:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 20,
               (unsigned int *)a4,
               1,
               67,
               (int *)this + 4,
               4096,
               0,
               a5);
    case 10:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 21,
               (unsigned int *)a4,
               1,
               47,
               (int *)this + 4,
               2048,
               0,
               a5);
    case 22:
      if ( a4 )
        v11 = *((_DWORD *)a4 + 8);
      else
        v11 = 0;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
        McTemplateK0qqqxx_EtwWriteTransfer(
          v11,
          0,
          *((_DWORD *)this + 8),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 8),
          v11,
          *((_DWORD *)this + 8),
          v11);
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 27,
               (unsigned int *)a4,
               1,
               89,
               (int *)this + 4,
               0x100000,
               0,
               a5);
    case 38:
LABEL_8:
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              196LL)
        || v7 != 4 && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v12, 200LL) )
      {
        return DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, v7 == 38, a5);
      }
      return -1073741811;
    case 39:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 28,
               (unsigned int *)a4,
               1,
               17,
               (int *)this + 4,
               0x4000000,
               0,
               a5);
    case 49:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 29,
               (unsigned int *)a4,
               1,
               202,
               (int *)this + 92,
               4,
               0,
               a5);
    default:
      return -1073741811;
  }
}
