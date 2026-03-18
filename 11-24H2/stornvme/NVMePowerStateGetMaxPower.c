/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x14000D660
 * Callers:
 *     NVMePowerInitialize @ 0x14001E528 (NVMePowerInitialize.c)
 *     NVMeValidatePowerStates @ 0x14001EDF4 (NVMeValidatePowerStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerStateGetMaxPower(unsigned __int16 *a1)
{
  int v1; // eax

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v1 = 10000;
  if ( (*((_BYTE *)a1 + 3) & 1) != 0 )
    v1 = 100;
  return (unsigned int)*a1 * v1;
}
