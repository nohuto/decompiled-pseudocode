/*
 * XREFs of ?SetReferenceArrayProperty@CGeometry2DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14019FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0EE@$0CA@$0CAO@$0CAP@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022A008 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0EE@$0CA@$0CAO@$0CAP@@Dir.c)
 */

__int64 __fastcall DirectComposition::CGeometry2DGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CGeometry2DGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,68,32,526,527>::Set(
             (char *)this + 56,
             a2,
             a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *a6 = 1;
  }
  return result;
}
