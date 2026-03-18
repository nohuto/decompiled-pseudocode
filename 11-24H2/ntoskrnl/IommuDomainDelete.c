/*
 * XREFs of IommuDomainDelete @ 0x140703CC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x140553CB8 (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return HalpIommuFreeDmaDomain(a1, a2, a3, a4);
  else
    return 0LL;
}
