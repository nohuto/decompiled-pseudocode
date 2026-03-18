/*
 * XREFs of IommuDomainDelete @ 0x1406F7DE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x1405513B8 (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1)
{
  if ( a1 )
    return HalpIommuFreeDmaDomain(a1);
  else
    return 0LL;
}
