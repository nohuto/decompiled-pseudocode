/*
 * XREFs of ?SetBufferProperty@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022A4CC
 * Callers:
 *     ?SetBufferProperty@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022A590 (-SetBufferProperty@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 * Callees:
 *     ?Copy@?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140225878 (-Copy@-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@QEAA.c)
 */

__int64 __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::SetBufferProperty(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 7 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,535,536>::Copy(
             (DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104),
             a4,
             a5);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x1000u;
  }
  return result;
}
