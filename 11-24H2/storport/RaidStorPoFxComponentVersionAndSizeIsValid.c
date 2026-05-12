/*
 * XREFs of RaidStorPoFxComponentVersionAndSizeIsValid @ 0x140072F84
 * Callers:
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     RaidAdapterValidateStorPoFxComponent @ 0x140072BC0 (RaidAdapterValidateStorPoFxComponent.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidStorPoFxComponentVersionAndSizeIsValid(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 == 1 )
  {
    if ( (unsigned int)a1[1] >= 0x20 )
      return (unsigned int)(v1 - 1) <= 1;
  }
  else
  {
    if ( v1 != 2 )
      return (unsigned int)(v1 - 1) <= 1;
    if ( (unsigned int)a1[1] >= 0x28 )
      return 1;
  }
  return 0;
}
