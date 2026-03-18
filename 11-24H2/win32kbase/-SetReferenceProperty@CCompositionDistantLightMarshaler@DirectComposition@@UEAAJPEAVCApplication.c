/*
 * XREFs of ?SetReferenceProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14014A170
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 4 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 14,
             (unsigned int *)a4,
             1,
             184,
             (int *)this + 4,
             512,
             0,
             a5);
  else
    return 3221225485LL;
}
