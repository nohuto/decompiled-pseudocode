/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14060E7AC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140B89628 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
