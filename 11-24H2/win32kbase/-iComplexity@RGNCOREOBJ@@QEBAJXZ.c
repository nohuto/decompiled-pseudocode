/*
 * XREFs of ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1400107A0
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F313C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 *     CddEngCombineRgn @ 0x1401CF310 (CddEngCombineRgn.c)
 *     CddEngGetRgnBox @ 0x1401CF460 (CddEngGetRgnBox.c)
 *     CddEngOffsetRgn @ 0x1401CF4C0 (CddEngOffsetRgn.c)
 * Callees:
 *     ?RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z @ 0x140010888 (-RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14002A15C (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 */

__int64 __fastcall RGNCOREOBJ::iComplexity(Win32kRS **this, const struct REGION_CORE *a2)
{
  Win32kRS *v2; // rax
  int v3; // ebx
  unsigned int sizeScan; // eax

  v2 = *this;
  v3 = 0;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_iComplexity(v2, a2);
  if ( *((_DWORD *)v2 + 6) == 1 )
    return 1LL;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    sizeScan = Win32kRS::RegionCore_get_sizeScan(v2, a2);
  else
    sizeScan = *((_DWORD *)v2 + 4);
  LOBYTE(v3) = sizeScan > 0x38;
  return (unsigned int)(v3 + 2);
}
