/*
 * XREFs of HvlMarkHiberPhase @ 0x14058663C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140586D84 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140586E58 (HvlpMarkHypervisorPagesForHibernation.c)
 */

void HvlMarkHiberPhase()
{
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    HvlpMarkHypervisorPagesForHibernation();
  if ( Address )
    PoSetHiberRange(0LL, 0x10000u, Address, (unsigned int)(dword_140F8E1B8 << 12), 0);
  if ( HvlHypervisorConnected )
    HvlpMarkHvlPagesForHibernation();
}
