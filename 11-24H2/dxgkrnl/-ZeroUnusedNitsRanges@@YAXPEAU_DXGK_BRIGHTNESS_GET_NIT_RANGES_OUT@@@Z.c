/*
 * XREFs of ?ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024DD98
 * Callers:
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024CB00 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024CC08 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall ZeroUnusedNitsRanges(struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *a1)
{
  __int64 RangeCount; // rdx

  if ( a1->NormalRangeCount > 0x10 )
  {
    WdLogSingleEntry1(2LL, a1->NormalRangeCount);
    WdLogGlobalForLineNumber = 36;
    a1->NormalRangeCount = 16;
  }
  RangeCount = a1->RangeCount;
  if ( (unsigned int)RangeCount > 0x10 )
  {
    WdLogSingleEntry1(2LL, RangeCount);
    LODWORD(RangeCount) = 16;
    WdLogGlobalForLineNumber = 41;
    a1->RangeCount = 16;
  }
  memset(&a1->SupportedRanges[(unsigned int)RangeCount], 0, 12LL * (unsigned int)(16 - RangeCount));
}
