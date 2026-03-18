/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404BC2F8
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 5 || HalpIommuSecurityPolicy != 1;
}
