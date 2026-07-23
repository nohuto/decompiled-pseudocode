/*
 * XREFs of PopIsHiberbootSupported @ 0x1406F7530
 * Callers:
 *     PopVerifySystemPowerPolicy @ 0x14099EEFC (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140A77F9C (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHiberbootSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 6) )
    return *(_BYTE *)(a1 + 8) != 0;
  return v1;
}
