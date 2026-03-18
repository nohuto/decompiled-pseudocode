/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400725A0
 * Callers:
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140070DC0 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072570 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072C10 (-SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140081590 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1401509D0 (-SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140158A60 (-SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B630 (-SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B6A0 (-SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 * Callees:
 *     McTemplateK0qqqxx_EtwWriteTransfer @ 0x140070E68 (McTemplateK0qqqxx_EtwWriteTransfer.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x140072938 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x14007FF90 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

int __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v6; // r9d
  __int64 k; // rax
  __int64 i; // rax
  int v11; // r8d
  __int64 j; // rax
  struct DirectComposition::CResourceMarshaler **v14; // r10
  struct DirectComposition::CResourceMarshaler **v15; // r10
  unsigned int v16; // r10d
  struct DirectComposition::CResourceMarshaler **v17; // r10
  struct DirectComposition::CResourceMarshaler **v18; // r10

  v6 = a3;
  *a5 = 0;
  switch ( a3 )
  {
    case 4:
      if ( a4 )
      {
        for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
        {
          if ( (_DWORD)i == 175 )
            goto LABEL_38;
        }
        return -1073741811;
      }
LABEL_38:
      if ( a4 != this[17] )
      {
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[17]);
        this[17] = a4;
      }
      *((_DWORD *)this + 4) |= 0x100u;
LABEL_21:
      v11 = 0;
LABEL_22:
      *a5 = 1;
      return v11;
    case 5:
LABEL_27:
      if ( !a4 )
        return DirectComposition::CVisualMarshaler::SetTransformParent(
                 (DirectComposition::CVisualMarshaler *)this,
                 a2,
                 a4,
                 v6 == 39,
                 a5);
      for ( j = *((unsigned int *)a4 + 9); (unsigned int)j < 0xC2; LODWORD(j) = dword_140270F80[j] )
      {
        if ( (_DWORD)j == 184 )
          return DirectComposition::CVisualMarshaler::SetTransformParent(
                   (DirectComposition::CVisualMarshaler *)this,
                   a2,
                   a4,
                   v6 == 39,
                   a5);
      }
      if ( a3 != 5
        && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              188LL) )
      {
        return DirectComposition::CVisualMarshaler::SetTransformParent(
                 (DirectComposition::CVisualMarshaler *)this,
                 a2,
                 a4,
                 v6 == 39,
                 a5);
      }
      return -1073741811;
    case 6:
      v11 = 0;
      v14 = this + 19;
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              56LL) )
      {
        if ( a4 != *v14 )
        {
          v11 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(a2);
          if ( v11 < 0 )
            return v11;
        }
        *((_DWORD *)this + 4) |= 0x400u;
        goto LABEL_22;
      }
      return -1073741811;
    case 7:
      if ( a4 )
      {
        for ( k = *((unsigned int *)a4 + 9); (unsigned int)k < 0xC2; LODWORD(k) = dword_140270F80[k] )
        {
          if ( (_DWORD)k == 67 )
            goto LABEL_16;
        }
        return -1073741811;
      }
LABEL_16:
      if ( a4 != this[20] )
      {
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[20]);
        this[20] = a4;
      }
      *((_DWORD *)this + 4) |= 0x1000u;
      goto LABEL_21;
    case 11:
      v11 = 0;
      v15 = this + 21;
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              47LL) )
      {
        if ( a4 != *v15 )
        {
          v11 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(a2);
          if ( v11 < 0 )
            return v11;
        }
        *((_DWORD *)this + 4) |= 0x800u;
        goto LABEL_22;
      }
      return -1073741811;
    case 23:
      if ( a4 )
        v16 = *((_DWORD *)a4 + 8);
      else
        v16 = 0;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
        McTemplateK0qqqxx_EtwWriteTransfer(
          ((unsigned __int64)*((unsigned int *)a2 + 7) << 32) | v16,
          (unsigned __int64)*((unsigned int *)a2 + 7) << 32,
          *((unsigned int *)this + 8),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 8),
          v16,
          *((_DWORD *)this + 8),
          v16);
      v11 = 0;
      v17 = this + 27;
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              89LL) )
      {
        if ( a4 != *v17 )
        {
          v11 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(a2);
          if ( v11 < 0 )
            return v11;
        }
        *((_DWORD *)this + 4) |= 0x100000u;
        goto LABEL_22;
      }
      return -1073741811;
    case 39:
      goto LABEL_27;
    case 40:
      v11 = 0;
      v18 = this + 28;
      if ( !a4
        || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              17LL) )
      {
        if ( a4 != *v18 )
        {
          v11 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(a2);
          if ( v11 < 0 )
            return v11;
        }
        *((_DWORD *)this + 4) |= 0x4000000u;
        goto LABEL_22;
      }
      return -1073741811;
  }
  if ( a3 != 49 )
    return -1073741811;
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           this,
           a2,
           this + 29,
           a4,
           1,
           190,
           this + 45,
           4,
           0,
           a5);
}
