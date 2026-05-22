/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x180080440
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x1800FE720 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x1800FE730 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x1800FE740 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x1800FE750 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCHA@EAAKXZ @ 0x1800FE760 (-Release@MPCInputRouter@@WCHA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCHI@EAAKXZ @ 0x1800FE780 (-Release@MPCInputRouter@@WCHI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x1800FE7A0 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x1800FE7B0 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x1800FE7C0 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x1800FE7D0 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEI@EAAKXZ @ 0x1800FE7E0 (-Release@DWMInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  return InputContext::Release((MPCInputRouter *)((char *)this + 72));
}
