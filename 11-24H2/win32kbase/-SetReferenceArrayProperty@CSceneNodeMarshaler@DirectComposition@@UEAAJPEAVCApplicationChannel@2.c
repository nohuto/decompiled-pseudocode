/*
 * XREFs of ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x14022AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0IO@$0EA@$0CGB@$0CGC@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022A048 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0IO@$0EA@$0CGB@$0CGC@@Dir.c)
 *     ?Set@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0JF@$0CA@$0CFP@$0CGA@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14022A068 (-Set@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0JF@$0CA@$0CFP@$0CGA@@Dir.c)
 */

__int64 __fastcall DirectComposition::CSceneNodeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( !a3 )
  {
    result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,149,32,607,608>::Set(
               (DirectComposition::CSceneNodeMarshaler *)((char *)this + 56),
               a2,
               (__int64)a4,
               a5);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 4) |= 0x20u;
    goto LABEL_8;
  }
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,142,64,609,610>::Set(
             (DirectComposition::CSceneNodeMarshaler *)((char *)this + 80),
             a2,
             (__int64)a4,
             a5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
LABEL_8:
    *a6 = 1;
  }
  return result;
}
