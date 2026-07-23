/*
 * XREFs of HalpIommuIsInPermanentPassthrough @ 0x1404F8050
 * Callers:
 *     HalpIommuLeaveDmaDomain @ 0x1404AF300 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuJoinDmaDomain @ 0x1405519E8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuIsInPermanentPassthrough(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 8) == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 472LL) & 0x100) == 0;
}
