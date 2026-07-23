/*
 * XREFs of HalpIommuSupportEnabled @ 0x14054FE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return (unsigned int)HalpIommuPolicy < 2 || HalpIommuPolicy == 3;
}
