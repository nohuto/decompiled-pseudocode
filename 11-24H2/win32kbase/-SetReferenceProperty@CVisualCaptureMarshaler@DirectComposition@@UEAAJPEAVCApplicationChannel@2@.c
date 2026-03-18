/*
 * XREFs of ?SetReferenceProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140237450
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetReferenceProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // r8d
  struct DirectComposition::CResourceMarshaler **v7; // r8

  if ( !a3 )
  {
    v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 72);
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             v7,
             (unsigned int *)a4,
             1,
             184,
             (int *)this + 4,
             0,
             0,
             a5);
  }
  v5 = a3 - 1;
  if ( !v5 )
  {
    v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 80);
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             v7,
             (unsigned int *)a4,
             1,
             184,
             (int *)this + 4,
             0,
             0,
             a5);
  }
  if ( v5 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 11,
             (unsigned int *)a4,
             1,
             42,
             (int *)this + 4,
             0,
             0,
             a5);
  else
    return 3221225485LL;
}
