/*
 * XREFs of ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140100E50
 * Callers:
 *     ?ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140100D30 (-ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@.c)
 *     ?SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140100D70 (-SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGradientBrushMarshaler::ClearStops(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rsi
  char **i; // rbx

  v2 = 0LL;
  for ( i = (char **)((char *)this + 96); (unsigned int)v2 < *((_DWORD *)this + 26); v2 = (unsigned int)(v2 + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)&(*i)[8 * v2]);
  if ( *i )
  {
    GreDeleteFastMutex(*i);
    *i = 0LL;
    *((_DWORD *)this + 26) = 0;
  }
}
