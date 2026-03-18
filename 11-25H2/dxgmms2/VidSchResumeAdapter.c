/*
 * XREFs of VidSchResumeAdapter @ 0x140101FA0
 * Callers:
 *     VidSchiDeferredVisibilityThread @ 0x140043660 (VidSchiDeferredVisibilityThread.c)
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x14002B9A4 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(__int64 a1, char a2)
{
  PsIsSystemThread(KeGetCurrentThread());
  if ( !a2 )
    VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
