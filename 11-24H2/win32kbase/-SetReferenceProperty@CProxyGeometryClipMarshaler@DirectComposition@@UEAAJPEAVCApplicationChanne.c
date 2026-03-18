/*
 * XREFs of ?SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140072060
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x14007FF90 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14013C110 (-SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAV.c)
 */

__int64 __fastcall DirectComposition::CProxyGeometryClipMarshaler::SetReferenceProperty(
        DirectComposition::CProxyGeometryClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler *v5; // r10
  unsigned int v8; // eax
  int v9; // r8d

  v5 = a4;
  v8 = a3 - 5;
  if ( a3 == 5 )
  {
    v9 = 0;
    if ( a4
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                             *((unsigned int *)a4 + 9),
                             v8 + 67) )
    {
      return (unsigned int)-1073741811;
    }
    else if ( v5 == *((struct DirectComposition::CResourceMarshaler **)this + 12)
           || (v9 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(a2),
               v9 >= 0) )
    {
      *((_DWORD *)this + 4) |= 0x800u;
      *a5 = 1;
    }
    return (unsigned int)v9;
  }
  else if ( a3 == 6 )
  {
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             this,
             a2,
             (char *)this + 104,
             a4,
             1,
             182,
             (char *)this + 16,
             4096,
             0,
             a5);
  }
  else
  {
    return DirectComposition::CGeometryMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
}
