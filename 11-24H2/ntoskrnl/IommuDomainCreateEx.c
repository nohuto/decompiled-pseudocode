/*
 * XREFs of IommuDomainCreateEx @ 0x140703CA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 */

__int64 __fastcall IommuDomainCreateEx(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, ULONG_PTR *a5)
{
  return HalpIommuAllocateDmaDomain(a1, a2, a3, a4, a5);
}
