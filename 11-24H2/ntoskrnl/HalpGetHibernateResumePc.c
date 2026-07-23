/*
 * XREFs of HalpGetHibernateResumePc @ 0x1405674F4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6CB90 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpGetHibernateResumePc())()
{
  return HalpSecureResumePoint;
}
