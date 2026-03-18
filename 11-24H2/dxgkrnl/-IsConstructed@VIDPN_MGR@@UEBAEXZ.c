/*
 * XREFs of ?IsConstructed@VIDPN_MGR@@UEBAEXZ @ 0x14008EE40
 * Callers:
 *     ?IsConstructed@VIDPN_MGR@@WEI@EBAEXZ @ 0x14008EE50 (-IsConstructed@VIDPN_MGR@@WEI@EBAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDPN_MGR::IsConstructed(VIDPN_MGR *this)
{
  return *((_DWORD *)this + 22) == 2;
}
