/*
 * XREFs of IommuDomainDelete @ 0x140701880
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x1405515F8 (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1, __int64 a2)
{
  if ( a1 )
    return HalpIommuFreeDmaDomain(a1, a2);
  else
    return 0LL;
}
