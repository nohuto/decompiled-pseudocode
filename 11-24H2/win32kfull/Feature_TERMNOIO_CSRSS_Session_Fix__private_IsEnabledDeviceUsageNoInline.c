/*
 * XREFs of Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140274E24
 * Callers:
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x14022F338 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x14023F770 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 * Callees:
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback @ 0x140274E5C (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TERMNOIO_CSRSS_Session_Fix__private_featureState & 0x10) != 0 )
    return Feature_TERMNOIO_CSRSS_Session_Fix__private_featureState & 1;
  else
    return Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_featureState,
             3LL);
}
