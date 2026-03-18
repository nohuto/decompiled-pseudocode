/*
 * XREFs of HvlMarkHiberPhase @ 0x14058935C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5D694 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140589A94 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140589B68 (HvlpMarkHypervisorPagesForHibernation.c)
 */

void HvlMarkHiberPhase()
{
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    HvlpMarkHypervisorPagesForHibernation();
  if ( Address )
    PoSetHiberRange(0LL, 0x10000u, Address, (unsigned int)(dword_140F8DFD8 << 12), 0);
  if ( HvlHypervisorConnected )
    HvlpMarkHvlPagesForHibernation();
}
