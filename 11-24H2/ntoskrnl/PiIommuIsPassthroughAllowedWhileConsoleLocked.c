/*
 * XREFs of PiIommuIsPassthroughAllowedWhileConsoleLocked @ 0x140736004
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140731B84 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsPassthroughAllowedWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
