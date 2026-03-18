/*
 * XREFs of IoInitSystem @ 0x140C098E8
 * Callers:
 *     Phase1Initialization @ 0x1406F0AF0 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x1404AC070 (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x1405A07AC (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x14070D988 (IopRegistryInitializeCallbacks.c)
 *     IopInitializeMdlCache @ 0x14070DA98 (IopInitializeMdlCache.c)
 *     VfNotifyVerifierOfEvent @ 0x140B72EC0 (VfNotifyVerifierOfEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 */

__int64 IoInitSystem()
{
  __int64 result; // rax
  int v1; // ebx

  result = IoInitSystemPreDrivers();
  if ( (int)result >= 0 )
  {
    WerLiveKernelInitSystem();
    v1 = IopInitializeSystemDrivers();
    if ( v1 >= 0 )
    {
      if ( !PnpBootOptions )
        PnpSerializeBoot();
      if ( ViVerifierEnabled )
        VfNotifyVerifierOfEvent(0);
      IopRegistryInitializeCallbacks();
      IopInitializeMdlCache();
      return 0LL;
    }
    else
    {
      HeadlessKernelAddLogEntry();
      result = (unsigned int)v1;
      LODWORD(IopInitFailCode) = 8;
    }
  }
  return result;
}
