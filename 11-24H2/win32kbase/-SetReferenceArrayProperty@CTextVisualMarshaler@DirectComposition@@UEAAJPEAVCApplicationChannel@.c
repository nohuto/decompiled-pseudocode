/*
 * XREFs of ?SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CID@$0CIE@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140229FC8 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CID@$0CIE@@Direc.c)
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CL@$01$0CIF@$0CIG@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140229FE8 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CL@$01$0CIF@$0CIG@@Direc.c)
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022CB10 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CTextVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 == 52 )
  {
    result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,35,1,643,644>::Set(
               (DirectComposition::CTextVisualMarshaler *)((char *)this + 376),
               a2,
               (__int64)a4,
               a5);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 92) |= 1u;
    goto LABEL_11;
  }
  if ( a3 == 53 )
  {
    result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,43,2,645,646>::Set(
               (DirectComposition::CTextVisualMarshaler *)((char *)this + 400),
               a2,
               (__int64)a4,
               a5);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 92) |= 2u;
    goto LABEL_11;
  }
  if ( a3 != 54 )
    return DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,43,2,645,646>::Set(
             (DirectComposition::CTextVisualMarshaler *)((char *)this + 424),
             a2,
             (__int64)a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 92) |= 4u;
LABEL_11:
    *a6 = 1;
  }
  return result;
}
