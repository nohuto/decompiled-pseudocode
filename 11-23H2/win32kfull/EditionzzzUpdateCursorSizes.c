/*
 * XREFs of EditionzzzUpdateCursorSizes @ 0x1C001CE60
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D40C (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionzzzUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
}
