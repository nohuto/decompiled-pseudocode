/*
 * XREFs of IommuDomainCreate @ 0x1406F7D90
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x140550BC4 (HalpIommuAllocateDmaDomain.c)
 */

__int64 __fastcall IommuDomainCreate(char a1, ULONG_PTR *a2)
{
  return HalpIommuAllocateDmaDomain(a1 == 0 ? 2 : 0, 0LL, 0LL, 0LL, a2);
}
