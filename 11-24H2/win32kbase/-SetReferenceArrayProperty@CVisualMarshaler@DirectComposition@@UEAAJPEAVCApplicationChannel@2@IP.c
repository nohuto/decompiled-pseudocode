/*
 * XREFs of ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022CB10
 * Callers:
 *     ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140072140 (-SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022AF00 (-SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$01$0BJB@$0BIB@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022CA94 (-Set@-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$01$0BJB@$0BI.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 46;
  if ( !v7 )
  {
    result = DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,2,401,385>::Set(
               (DirectComposition::CVisualMarshaler *)((char *)this + 312),
               a2,
               (__int64)a4,
               a5);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 90) |= 1u;
    goto LABEL_8;
  }
  if ( v7 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,2,401,385>::Set(
             (DirectComposition::CVisualMarshaler *)((char *)this + 336),
             a2,
             (__int64)a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 90) |= 2u;
LABEL_8:
    *a6 = 1;
  }
  return result;
}
