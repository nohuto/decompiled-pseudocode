/*
 * XREFs of ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140081590
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400725A0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

int __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // ebx
  __int64 i; // rax

  switch ( a3 )
  {
    case 11:
      return -1073741811;
    case 52:
      v8 = 0;
      if ( a4 )
      {
        for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
        {
          if ( (_DWORD)i == 17 )
            goto LABEL_9;
        }
        return -1073741811;
      }
      else
      {
LABEL_9:
        if ( a4 != *((struct DirectComposition::CResourceMarshaler **)this + 46) )
        {
          if ( a4 )
            DirectComposition::CResourceMarshaler::AddRef(a4);
          DirectComposition::CApplicationChannel::ReleaseResource(
            a2,
            *((struct DirectComposition::CResourceMarshaler **)this + 46));
          *((_QWORD *)this + 46) = a4;
        }
        *((_DWORD *)this + 96) |= 1u;
        *a5 = 1;
      }
      return v8;
    case 53:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 47,
               (unsigned int *)a4,
               1,
               40,
               (int *)this + 96,
               2,
               0,
               a5);
    default:
      return DirectComposition::CVisualMarshaler::SetReferenceProperty(
               (struct DirectComposition::CResourceMarshaler **)this,
               a2,
               a3,
               a4,
               a5);
  }
}
