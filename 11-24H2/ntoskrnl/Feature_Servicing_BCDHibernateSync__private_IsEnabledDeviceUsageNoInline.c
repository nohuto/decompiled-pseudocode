/*
 * XREFs of Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline @ 0x1405D33F0
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 *     PopBuildMemoryImageHeader @ 0x140B64920 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     Feature_Servicing_BCDHibernateSync__private_IsEnabledFallback @ 0x1405D3428 (Feature_Servicing_BCDHibernateSync__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_BCDHibernateSync__private_featureState & 0x10) != 0 )
    return Feature_Servicing_BCDHibernateSync__private_featureState & 1;
  else
    return Feature_Servicing_BCDHibernateSync__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_BCDHibernateSync__private_featureState,
             3LL);
}
