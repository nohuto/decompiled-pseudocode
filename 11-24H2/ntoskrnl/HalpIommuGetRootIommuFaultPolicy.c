/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x14054D328
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4D550 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3596LL);
}
