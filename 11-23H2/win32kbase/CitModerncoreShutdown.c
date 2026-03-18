/*
 * XREFs of CitModerncoreShutdown @ 0x1C0234BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A3B38 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C0293D20 )
    CitpLogoff(xmmword_1C0293D20);
}
