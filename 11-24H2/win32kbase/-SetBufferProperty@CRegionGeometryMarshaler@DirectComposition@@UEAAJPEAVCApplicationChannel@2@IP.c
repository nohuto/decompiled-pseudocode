/*
 * XREFs of ?SetBufferProperty@CRegionGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14010BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402258C0 (-Copy@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAAJPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CRegionGeometryMarshaler::SetBufferProperty(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 5 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<tagRECT,1735541572,2048,564,565>::Copy((char *)this + 96, a4, a5);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x800u;
  }
  return result;
}
