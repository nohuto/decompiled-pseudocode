/*
 * XREFs of ?SetReferenceProperty@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1402396C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetReferenceProperty(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CApplicationChannel *v5; // r11
  DirectComposition::CSceneSurfaceMaterialInputMarshaler *v6; // r10
  unsigned int v7; // r8d

  v5 = a2;
  v6 = this;
  if ( a3 == 1
    && (!a4
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4 + 9), 38)
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(v7, 190)) )
  {
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)v6,
             v5,
             (struct DirectComposition::CResourceMarshaler **)v6 + 7,
             (unsigned int *)a4,
             1,
             135,
             (int *)v6 + 4,
             64,
             0,
             a5);
  }
  else
  {
    return 3221225485LL;
  }
}
