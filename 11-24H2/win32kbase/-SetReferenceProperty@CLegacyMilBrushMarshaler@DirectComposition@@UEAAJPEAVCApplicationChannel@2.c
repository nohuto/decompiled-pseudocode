/*
 * XREFs of ?SetReferenceProperty@CLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B260
 * Callers:
 *     ?SetReferenceProperty@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B1A0 (-SetReferenceProperty@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CLegacyMilBrushMarshaler::SetReferenceProperty(
        DirectComposition::CLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // r8d
  int v6; // r8d
  struct DirectComposition::CResourceMarshaler **v8; // r8
  int v9; // [rsp+38h] [rbp-20h]
  bool *v10; // [rsp+48h] [rbp-10h]

  *a5 = 0;
  v5 = a3 - 1;
  if ( !v5 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)this,
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 8,
             (unsigned int *)a4,
             1,
             62,
             (int *)this + 4,
             64,
             0,
             a5);
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 3221225485LL;
    v10 = a5;
    v8 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 80);
    v9 = 256;
  }
  else
  {
    v10 = a5;
    v8 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 72);
    v9 = 128;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           (__int64)this,
           a2,
           v8,
           (unsigned int *)a4,
           1,
           174,
           (int *)this + 4,
           v9,
           0,
           v10);
}
