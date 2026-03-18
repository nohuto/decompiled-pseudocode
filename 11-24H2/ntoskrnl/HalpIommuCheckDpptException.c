/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404BB4F8
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BB2D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 5 || HalpIommuSecurityPolicy != 1;
}
