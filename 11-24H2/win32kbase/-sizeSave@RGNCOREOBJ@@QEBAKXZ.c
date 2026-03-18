/*
 * XREFs of ?sizeSave@RGNCOREOBJ@@QEBAKXZ @ 0x14007BCFC
 * Callers:
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401CF260 (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14007BDF8 (-RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_numRect@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14007BE84 (-RegionCore_numRect@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 */

int __fastcall RGNCOREOBJ::sizeSave(Win32kRS **this)
{
  int v2; // ebx
  int i; // edx
  _DWORD *v4; // r8

  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_sizeSave(*this, (const struct REGION_CORE *)WPP_MAIN_CB.Dpc.SystemArgument1);
  v2 = *((_DWORD *)*this + 6);
  v4 = *(_DWORD **)*this;
  for ( i = 0; v2; --v2 )
  {
    i += *v4 >> 1;
    v4 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
  }
  return 16 * i;
}
