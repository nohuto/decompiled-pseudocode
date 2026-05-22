/*
 * XREFs of ?GetEffectiveButtonRoutingPolicy@PenEventsDispatcherPrincipal@@AEAA?AW4RoutingPolicy@Input@Devices@Internal@Windows@@XZ @ 0x180194FE8
 * Callers:
 *     ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180195C9C (-OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180195D14 (-OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180195D84 (-OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PenEventsDispatcherPrincipal::GetEffectiveButtonRoutingPolicy(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 196) )
    return *(unsigned int *)(a1 + 200);
  return result;
}
