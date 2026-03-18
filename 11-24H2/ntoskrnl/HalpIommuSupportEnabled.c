/*
 * XREFs of HalpIommuSupportEnabled @ 0x1405524E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return (unsigned int)HalpIommuPolicy < 2 || HalpIommuPolicy == 3;
}
