/*
 * XREFs of ?SetReferenceProperty@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140080028 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022B260 (-SetReferenceProperty@CLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::SetReferenceProperty(
        DirectComposition::CImageLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8
  int v7; // [rsp+38h] [rbp-20h]
  bool *v8; // [rsp+48h] [rbp-10h]

  *a5 = 0;
  switch ( a3 )
  {
    case 7u:
      v8 = a5;
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 112);
      v7 = 4096;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               v6,
               (unsigned int *)a4,
               1,
               128,
               (int *)this + 4,
               v7,
               0,
               v8);
    case 9u:
      v8 = a5;
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
      v7 = 0x4000;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               v6,
               (unsigned int *)a4,
               1,
               128,
               (int *)this + 4,
               v7,
               0,
               v8);
    case 0x11u:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               (__int64)this,
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 22,
               (unsigned int *)a4,
               1,
               85,
               (int *)this + 4,
               0x400000,
               0,
               a5);
    default:
      return DirectComposition::CLegacyMilBrushMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
}
