/*
 * XREFs of ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001A350 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F313C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 *     CddEngCombineRgn @ 0x1401CF310 (CddEngCombineRgn.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x14002AF10 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x140065BE4 (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DD83C (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C1340 (-RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z.c)
 */

bool __fastcall RGNCOREOBJ::bCopy(REGION_CORE **this, REGION_CORE **a2, const struct REGION_CORE *a3)
{
  __int64 v5; // rax
  struct REGION_CORE *v6; // rdx
  __int64 v7; // rsi
  char *pScan; // rax
  unsigned int v9; // edx
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v11 = 0;
    if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(this, a2, &v11) )
    {
      v5 = Win32AllocPoolZInitImpl(256LL, v11, 0x6E637347u);
      v7 = v5;
      if ( !v5 )
        return v5;
      pScan = (char *)REGION_CORE::get_pScan(*this, v6);
      GreDeleteFastMutex(pScan);
      v9 = v11;
      *(_QWORD *)*this = v7;
      REGION_CORE::set_sizeScanAlloc(*this, v9);
    }
    RGNCOREOBJ::vCopy(this, a2);
    LOBYTE(v5) = 1;
    return v5;
  }
  LOBYTE(v5) = Win32kRS::RegionCore_bCopy(*this, *a2, a3);
  return v5;
}
