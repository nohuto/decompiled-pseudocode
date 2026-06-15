/*
 * XREFs of ?MME_ServiceStop@@YAXXZ @ 0x1800FEEB0
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800CFB30 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     ?DeletePnpInfo@@YAXXZ @ 0x1800FE8D8 (-DeletePnpInfo@@YAXXZ.c)
 */

void MME_ServiceStop(void)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_62e65b1aa5e43d79debbf88575ed7e0c_Traceguids);
  }
  DeletePnpInfo();
  if ( AudioEndpointBuilderSid )
    LocalFree(AudioEndpointBuilderSid);
  if ( AudiosrvSid )
    LocalFree(AudiosrvSid);
  AudioEndpointBuilderSid = 0LL;
  AudiosrvSid = 0LL;
}
