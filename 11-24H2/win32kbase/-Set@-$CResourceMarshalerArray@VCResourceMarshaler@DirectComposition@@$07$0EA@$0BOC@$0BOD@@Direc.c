/*
 * XREFs of ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$07$0EA@$0BOC@$0BOD@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140229FA8
 * Callers:
 *     ?SetReferenceArrayProperty@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022AE20 (-SetReferenceArrayProperty@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1400F6278 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,8,64,482,483>::Set(
        DirectComposition::CResourceMarshalerArrayBase *a1,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  return DirectComposition::CResourceMarshalerArrayBase::Set(a1, a2, a3, a4, 8);
}
