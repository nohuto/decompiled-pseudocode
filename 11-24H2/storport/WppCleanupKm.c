/*
 * XREFs of WppCleanupKm @ 0x14018431C
 * Callers:
 *     RaDriverUnload @ 0x14003F3B0 (RaDriverUnload.c)
 *     StorPortInitialize @ 0x14006FD50 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
        {
          ((void (*)(void))pfnEtwUnregister)();
          v0->Vpb = 0LL;
        }
        v0 = v0->NextDevice;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
