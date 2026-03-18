/*
 * XREFs of NVMeValidatePowerStates @ 0x14001EDF4
 * Callers:
 *     NVMePowerInitialize @ 0x14001E528 (NVMePowerInitialize.c)
 * Callees:
 *     NVMeGetPowerState @ 0x14000C050 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x14000D660 (NVMePowerStateGetMaxPower.c)
 */

char __fastcall NVMeValidatePowerStates(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 i; // r10
  __int64 PowerState; // rbx
  unsigned __int16 *v5; // r11
  unsigned int MaxPower; // eax
  char v7; // r9
  char v8; // r10
  __int64 v9; // r11
  unsigned int v10; // r8d

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 1560) + 263LL) + 1;
  if ( (*(_BYTE *)(NVMeGetPowerState(a1, 0) + 3) & 2) != 0 )
    return 0;
  for ( i = 1; i < v2; i = v8 + 1 )
  {
    PowerState = NVMeGetPowerState(a1, i);
    NVMePowerStateGetMaxPower(v5);
    MaxPower = NVMePowerStateGetMaxPower((unsigned __int16 *)PowerState);
    if ( MaxPower > v10 )
      return 0;
    if ( (*(_BYTE *)(PowerState + 3) & 2) != 0 )
    {
      if ( v7 )
      {
        if ( (*(_BYTE *)(v9 + 3) & 2) == 0 )
          return 0;
      }
      else if ( (*(_BYTE *)(v9 + 3) & 2) != 0 )
      {
        return 0;
      }
    }
    else if ( v7 )
    {
      return 0;
    }
  }
  return 1;
}
