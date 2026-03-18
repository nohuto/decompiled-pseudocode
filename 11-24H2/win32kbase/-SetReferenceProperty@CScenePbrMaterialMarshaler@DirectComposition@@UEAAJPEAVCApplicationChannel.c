/*
 * XREFs of ?SetReferenceProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B590
 * Callers:
 *     ?SetReferenceProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B440 (-SetReferenceProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCAppl.c)
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetReferenceProperty(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  switch ( a3 )
  {
    case 2:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 8,
               (unsigned int *)a4,
               1,
               144,
               (int *)this + 4,
               128,
               0,
               a5);
    case 5:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 11,
               (unsigned int *)a4,
               1,
               144,
               (int *)this + 4,
               1024,
               0,
               a5);
    case 7:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 13,
               (unsigned int *)a4,
               1,
               144,
               (int *)this + 4,
               4096,
               0,
               a5);
  }
  return 3221225485LL;
}
