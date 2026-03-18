/*
 * XREFs of ?SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400FF940
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022589C (-Copy@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAAJPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetBufferProperty(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int128 v8; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 4 && a4 && a5 == 16 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_OWORD *)this + 6) = v8;
      *a6 = 1;
      return result;
    }
    return 3221225485LL;
  }
  if ( !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<tagRECT,1684489028,32,520,521>::Copy((char *)this + 56, a4, a5);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
  }
  return result;
}
