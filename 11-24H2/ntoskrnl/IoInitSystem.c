/*
 * XREFs of IoInitSystem @ 0x140C1C9C8
 * Callers:
 *     Phase1Initialization @ 0x1406FA520 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x1404A7D40 (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x1405A0E5C (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x140717618 (IopRegistryInitializeCallbacks.c)
 *     IopInitializeMdlCache @ 0x140717728 (IopInitializeMdlCache.c)
 *     VfNotifyVerifierOfEvent @ 0x140B84EA0 (VfNotifyVerifierOfEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 */

__int64 __fastcall IoInitSystem(void *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx

  result = IoInitSystemPreDrivers(a1);
  if ( (int)result >= 0 )
  {
    WerLiveKernelInitSystem();
    v4 = IopInitializeSystemDrivers();
    if ( v4 >= 0 )
    {
      if ( !PnpBootOptions )
        PnpSerializeBoot();
      if ( ViVerifierEnabled )
        VfNotifyVerifierOfEvent(0);
      IopRegistryInitializeCallbacks(v3, v2);
      IopInitializeMdlCache();
      return 0LL;
    }
    else
    {
      HeadlessKernelAddLogEntry();
      result = (unsigned int)v4;
      LODWORD(IopInitFailCode) = 8;
    }
  }
  return result;
}
