/*
 * XREFs of ?IsRemoteAppSession@@YA_NXZ @ 0x18020BDA8
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180185EF8 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18024C110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180673EBC (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool IsRemoteAppSession(void)
{
  int v0; // eax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = `IsRemoteAppSession'::`2'::s_stSessionType;
  if ( !`IsRemoteAppSession'::`2'::s_stSessionType )
  {
    v2 = 0;
    if ( (unsigned __int8)WinStationQueryCurrentSessionInformation(
                            39LL,
                            &`IsRemoteAppSession'::`2'::s_stSessionType,
                            4LL,
                            &v2) )
    {
      v0 = `IsRemoteAppSession'::`2'::s_stSessionType;
    }
    else
    {
      v0 = 0;
      `IsRemoteAppSession'::`2'::s_stSessionType = 0;
    }
  }
  return v0 == 5;
}
