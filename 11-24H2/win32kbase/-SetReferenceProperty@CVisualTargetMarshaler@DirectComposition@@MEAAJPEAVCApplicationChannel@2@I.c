/*
 * XREFs of ?SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400724F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x14007FF90 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::SetReferenceProperty(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler *v5; // r10
  int v8; // r8d

  v5 = a4;
  if ( a3 == 52
    && ((v8 = 0, !a4)
     || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 184LL)) )
  {
    if ( v5 == *((struct DirectComposition::CResourceMarshaler **)this + 8)
      || (v8 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(a2),
          v8 >= 0) )
    {
      *((_DWORD *)this + 4) |= 0x20u;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
