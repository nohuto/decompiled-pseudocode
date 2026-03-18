/*
 * XREFs of ?SetReferenceProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140232A30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetReferenceProperty(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8

  if ( a3 )
  {
    if ( a3 != 1 )
      return 3221225485LL;
    v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 64);
  }
  else
  {
    v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           (__int64)this,
           a2,
           v6,
           (unsigned int *)a4,
           1,
           42,
           (int *)this + 4,
           0,
           0,
           a5);
}
