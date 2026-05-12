/*
 * XREFs of RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x140072FB4
 * Callers:
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxDeviceVersionAndSizeIsValid(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] < 0x10 )
      return 0;
  }
  else if ( v1 == 2 )
  {
    return (unsigned int)a1[1] >= 0x18;
  }
  if ( v1 != 3 )
    return (unsigned int)(v1 - 1) <= 2;
  return (unsigned int)a1[1] >= 0x18;
}
