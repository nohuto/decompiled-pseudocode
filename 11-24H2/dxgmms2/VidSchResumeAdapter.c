/*
 * XREFs of VidSchResumeAdapter @ 0x140100DE0
 * Callers:
 *     VidSchiDeferredVisibilityThread @ 0x1400422D0 (VidSchiDeferredVisibilityThread.c)
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x140020238 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(__int64 a1, char a2)
{
  PsIsSystemThread(KeGetCurrentThread());
  if ( !a2 )
    VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
