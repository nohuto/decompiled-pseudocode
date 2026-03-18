/*
 * XREFs of IoInitSystem @ 0x140C1A988
 * Callers:
 *     Phase1Initialization @ 0x1406FC8E0 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x1404AD660 (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x1405A3F1C (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x140719A88 (IopRegistryInitializeCallbacks.c)
 *     IopInitializeMdlCache @ 0x140719B98 (IopInitializeMdlCache.c)
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 */

__int64 IoInitSystem()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9

  result = IoInitSystemPreDrivers();
  if ( (int)result >= 0 )
  {
    WerLiveKernelInitSystem();
    v3 = IopInitializeSystemDrivers();
    if ( v3 >= 0 )
    {
      if ( !PnpBootOptions )
        PnpSerializeBoot();
      if ( ViVerifierEnabled )
        VfNotifyVerifierOfEvent(0);
      IopRegistryInitializeCallbacks(v2, v1, v4, v5);
      IopInitializeMdlCache();
      return 0LL;
    }
    else
    {
      HeadlessKernelAddLogEntry();
      result = (unsigned int)v3;
      LODWORD(IopInitFailCode) = 8;
    }
  }
  return result;
}
