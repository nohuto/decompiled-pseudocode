/*
 * XREFs of ?GetTrustLevel@CAppMemoryReport@System@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180012730
 * Callers:
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800150B0 (-GetTrustLevel@CMemoryManager@System@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800150C0 (-GetTrustLevel@CMemoryManager@System@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800150D0 (-GetTrustLevel@CMemoryManager@System@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x1800150E0 (-GetTrustLevel@CMemoryManager@System@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800189C0 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800189D0 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::GetTrustLevel(
        Windows::System::CAppMemoryReport *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
