/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x180080440
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x1800FCA50 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x1800FCA60 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x1800FCA70 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x1800FCA80 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCHI@EAAKXZ @ 0x1800FCA90 (-Release@MPCInputRouter@@WCHI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x1800FCAB0 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCIA@EAAKXZ @ 0x1800FCAC0 (-Release@MPCInputRouter@@WCIA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x1800FCAE0 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x1800FCAF0 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x1800FCB00 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEI@EAAKXZ @ 0x1800FCB10 (-Release@DWMInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  return InputContext::Release((MPCInputRouter *)((char *)this + 72));
}
