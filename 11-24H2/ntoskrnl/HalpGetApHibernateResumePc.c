/*
 * XREFs of HalpGetApHibernateResumePc @ 0x14056A064
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpGetApHibernateResumePc())()
{
  return HalpSecureResumePoint;
}
