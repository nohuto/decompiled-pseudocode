/*
 * XREFs of ndisPktMonRegisterComponentsCallback @ 0x1400B2140
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B1C84 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B1E1C (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B1F7C (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 */

void ndisPktMonRegisterComponentsCallback()
{
  ndisPktMonRegisterAllMiniports();
  ndisPktMonRegisterAllFilters();
  ndisPktMonRegisterAllOpens();
}
