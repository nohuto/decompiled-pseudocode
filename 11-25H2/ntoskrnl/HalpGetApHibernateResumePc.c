/*
 * XREFs of HalpGetApHibernateResumePc @ 0x140566D68
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpGetApHibernateResumePc())()
{
  return HalpSecureResumePoint;
}
