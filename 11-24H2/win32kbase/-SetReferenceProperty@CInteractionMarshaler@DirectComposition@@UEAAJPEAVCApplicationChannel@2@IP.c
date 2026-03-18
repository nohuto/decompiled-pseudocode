/*
 * XREFs of ?SetReferenceProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140130EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetReferenceProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 12 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 39,
             (unsigned int *)a4,
             1,
             105,
             (int *)this + 4,
             1024,
             0,
             a5);
  if ( a3 == 16 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 40,
             (unsigned int *)a4,
             1,
             82,
             (int *)this + 4,
             0x2000,
             0,
             a5);
  return 3221225485LL;
}
