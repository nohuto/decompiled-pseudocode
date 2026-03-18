/*
 * XREFs of HvlMarkHiberPhase @ 0x140585CEC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B4D604 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140586424 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405864F8 (HvlpMarkHypervisorPagesForHibernation.c)
 */

void HvlMarkHiberPhase()
{
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    HvlpMarkHypervisorPagesForHibernation();
  if ( Address )
    PoSetHiberRange(0LL, 0x10000u, Address, (unsigned int)(dword_140F8D818 << 12), 0);
  if ( HvlHypervisorConnected )
    HvlpMarkHvlPagesForHibernation();
}
