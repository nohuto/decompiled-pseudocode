/*
 * XREFs of PpmEventInitialize @ 0x140C332E8
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     PpmEventInitializeEx @ 0x140C3411C (PpmEventInitializeEx.c)
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
