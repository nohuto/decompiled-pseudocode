/*
 * XREFs of PpmIdleIsStateDisabled @ 0x1404F8ED0
 * Callers:
 *     PpmInstallNewIdleStates @ 0x140436C00 (PpmInstallNewIdleStates.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140748780 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140A2E800 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmIdleIsStateDisabled(char a1, unsigned int a2)
{
  char v2; // r8
  char v3; // cl
  bool v4; // zf
  char v5; // cl

  v2 = 0;
  if ( !a1 )
  {
    if ( (_BYTE)PpmIdleDisableStatesAtBoot != 3 )
      return (unsigned __int8)(PpmIdleDisableStatesAtBoot - 1) <= 1u;
    v5 = 15;
    if ( a2 < 0xF )
      v5 = a2;
    v4 = (HIWORD(PpmIdleDisableStatesAtBoot) & (unsigned __int16)(1 << v5)) == 0;
    return !v4;
  }
  if ( a2 )
  {
    if ( (_BYTE)PpmIdleDisableStatesAtBoot == 3 )
    {
      v3 = 7;
      if ( a2 < 7 )
        v3 = a2;
      v4 = (BYTE1(PpmIdleDisableStatesAtBoot) & (unsigned __int8)(1 << v3)) == 0;
      return !v4;
    }
    return (_BYTE)PpmIdleDisableStatesAtBoot == 2;
  }
  return v2;
}
