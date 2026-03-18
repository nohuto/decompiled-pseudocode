/*
 * XREFs of ?Copy@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BOI@$0BOJ@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140225854
 * Callers:
 *     ?SetBufferProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022A170 (-SetBufferProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140105D3C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,256,488,489>::Copy(
        DirectComposition::CMarshaledArrayBase *a1,
        const void *a2,
        unsigned __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::Copy(a1, a2, a3, 0x10uLL, 0x30614344u);
}
