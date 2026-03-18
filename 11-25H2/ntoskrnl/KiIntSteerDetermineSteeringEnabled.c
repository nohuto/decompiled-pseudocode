/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x140C18EEC
 * Callers:
 *     KiIntSteerInit @ 0x140C18F78 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline @ 0x1405BFFE0 (Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline.c)
 *     HviIsXboxNanovisorPresent @ 0x140657B40 (HviIsXboxNanovisorPresent.c)
 */

char KiIntSteerDetermineSteeringEnabled()
{
  if ( (KiInterruptSteeringFlags & 1) != 0 )
    return 0;
  if ( (KiInterruptSteeringFlags & 2) != 0 )
    return 1;
  if ( !(unsigned int)Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned __int16)KiActiveGroups > 1u )
      return 0;
    goto LABEL_8;
  }
  if ( KiActiveGroups == 1 )
  {
LABEL_8:
    if ( KeQueryActiveProcessorCountEx(0) < 2 )
      return 0;
  }
  if ( (_BYTE)dword_140FC420C || HviIsXboxNanovisorPresent() )
    return 0;
  if ( !HvlHypervisorConnected )
    return !HviIsAnyHypervisorPresent();
  if ( (HvlpFlags & 2) == 0 )
    return 0;
  return (HvlpRootFlags & 0x400) == 0;
}
