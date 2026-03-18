/*
 * XREFs of Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline @ 0x1405CE9B4
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140B54810 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback @ 0x1405CE998 (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_HibernateRelaxVBSPolicy__private_featureState & 2) != 0 )
    return Feature_Servicing_HibernateRelaxVBSPolicy__private_featureState & 1;
  else
    return Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HibernateRelaxVBSPolicy__private_featureState,
             0);
}
