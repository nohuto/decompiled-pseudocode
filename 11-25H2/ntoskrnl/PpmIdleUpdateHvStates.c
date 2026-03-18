/*
 * XREFs of PpmIdleUpdateHvStates @ 0x140754310
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x14057FB50 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigureIdleStates @ 0x140585A24 (HvlConfigureIdleStates.c)
 */

__int64 __fastcall PpmIdleUpdateHvStates(__int64 a1)
{
  int LpIndexFromApicId; // eax

  if ( (HvlEnlightenments & 0x400) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId();
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  else
    return HvlConfigureIdleStates(LpIndexFromApicId, *(_OWORD **)(a1 + 8));
}
