/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x140C29FFC
 * Callers:
 *     KiIntSteerInit @ 0x140C2A074 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A37D0 (HviIsAnyHypervisorPresent.c)
 *     HviIsXboxNanovisorPresent @ 0x140663E00 (HviIsXboxNanovisorPresent.c)
 */

char KiIntSteerDetermineSteeringEnabled()
{
  bool v1; // zf

  if ( (KiInterruptSteeringFlags & 1) == 0 )
  {
    if ( (KiInterruptSteeringFlags & 2) != 0 )
      return 1;
    if ( (KiActiveGroups != 1 || KeQueryActiveProcessorCountEx(0) >= 2)
      && !(_BYTE)dword_140FC421C
      && !HviIsXboxNanovisorPresent() )
    {
      if ( HvlHypervisorConnected )
      {
        if ( (HvlpFlags & 2) == 0 )
          return 0;
        v1 = (HvlpRootFlags & 0x400) == 0;
      }
      else
      {
        v1 = !HviIsAnyHypervisorPresent();
      }
      if ( v1 )
        return 1;
    }
  }
  return 0;
}
