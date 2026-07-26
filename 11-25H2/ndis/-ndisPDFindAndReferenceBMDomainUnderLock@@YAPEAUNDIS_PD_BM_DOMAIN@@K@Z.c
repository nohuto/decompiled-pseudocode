/*
 * XREFs of ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x14014856C
 * Callers:
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1401485A0 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

KPushLockBase *__fastcall ndisPDFindAndReferenceBMDomainUnderLock(int a1)
{
  KPushLockBase *i; // rdx
  KPushLockBase *result; // rax

  for ( i = (KPushLockBase *)qword_140127008[1030].m_Lock.Value;
        i != &qword_140127008[1030];
        i = (KPushLockBase *)i->m_Lock.Value )
  {
    result = i - 1;
    if ( i[2].m_Lock.0 == a1 )
    {
      ++*(_DWORD *)&result->m_Lock.0;
      return result;
    }
  }
  return 0LL;
}
