/*
 * XREFs of PpmEventInitialize @ 0x140C35428
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     PpmEventInitializeEx @ 0x140C3625C (PpmEventInitializeEx.c)
 */

NTSTATUS PpmEventInitialize()
{
  NTSTATUS result; // eax

  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    return PpmEventInitializeEx();
  result = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle);
  if ( result >= 0 )
  {
    PpmEtwRegistered = 1;
    return 0;
  }
  return result;
}
