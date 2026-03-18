/*
 * XREFs of ?SetBufferProperty@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::SetBufferProperty(
        DirectComposition::CImageLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 == 6 )
  {
    if ( a4 && a5 == 16 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x800u;
      *((_OWORD *)this + 6) = v8;
      goto LABEL_9;
    }
  }
  else if ( a3 == 8 && a4 && a5 == 16 )
  {
    v7 = *a4;
    *((_DWORD *)this + 4) |= 0x2000u;
    *(_OWORD *)((char *)this + 120) = v7;
LABEL_9:
    *a6 = 1;
    return result;
  }
  return 3221225485LL;
}
