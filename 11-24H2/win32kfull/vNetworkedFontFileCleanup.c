/*
 * XREFs of vNetworkedFontFileCleanup @ 0x140305020
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize@NetworkedFontFileTable@@YAXXZ @ 0x1403044A4 (-Uninitialize@NetworkedFontFileTable@@YAXXZ.c)
 */

void vNetworkedFontFileCleanup()
{
  __int64 v0; // rdx
  NetworkedFontFileTable *v1; // rcx

  if ( (unsigned int)UserIsServiceSession() )
    NetworkedFontFileTable::Uninitialize(v1, v0);
}
