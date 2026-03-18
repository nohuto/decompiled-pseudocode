/*
 * XREFs of PopIsHiberbootSupported @ 0x1406F98F0
 * Callers:
 *     PopVerifySystemPowerPolicy @ 0x1409B88AC (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140A7DC9C (PopVerifySystemPowerState.c)
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
