/*
 * XREFs of ?AddRef@MPCInputRouter@@UEAAKXZ @ 0x18007F3D0
 * Callers:
 *     ?AddRef@MPCInputRouter@@W7EAAKXZ @ 0x1800FCA70 (-AddRef@MPCInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x1800FCA80 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x1800FCA90 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x1800FCAA0 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCHA@EAAKXZ @ 0x1800FCAB0 (-AddRef@MPCInputRouter@@WCHA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCHI@EAAKXZ @ 0x1800FCAD0 (-AddRef@MPCInputRouter@@WCHI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x1800FCAF0 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDA@EAAKXZ @ 0x1800FCB00 (-AddRef@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDI@EAAKXZ @ 0x1800FCB10 (-AddRef@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEA@EAAKXZ @ 0x1800FCB20 (-AddRef@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEI@EAAKXZ @ 0x1800FCB30 (-AddRef@MPCInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::AddRef(MPCInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 20);
}
