/*
 * XREFs of RaidGetStorPoFxComponent @ 0x14002B0C0
 * Callers:
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x140072C84 (RaidGetTotalStorPoFxDeviceSize.c)
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1400781BC (RaidRegisterForRuntimePowerManagement.c)
 *     NvmeAdapterInitializePoFx @ 0x14012EA7C (NvmeAdapterInitializePoFx.c)
 *     NvmeNamespaceIdleState @ 0x140133760 (NvmeNamespaceIdleState.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x140136338 (NvmeRegisterForRuntimePowerManagement.c)
 * Callees:
 *     <none>
 */

int *__fastcall RaidGetStorPoFxComponent(int *a1, unsigned int a2)
{
  int v2; // eax

  v2 = *a1;
  if ( *a1 == 1 )
  {
    if ( a2 < a1[2] )
      return &a1[16 * (unsigned __int64)a2 + 4];
    return 0LL;
  }
  if ( v2 != 2 && v2 != 3 || a2 >= a1[2] )
    return 0LL;
  return &a1[16 * (unsigned __int64)a2 + 6];
}
