/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1400ACD5C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003E494 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     VidSchFlushDevice @ 0x1400ACF70 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1401008A0 (VidSchFlushContext.c)
 *     VidSchFlushHwQueue @ 0x140103DC0 (VidSchFlushHwQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14010845C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x140036160 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400AD5C4 (VidSchRegisterCompletionEvent.c)
 */

_BOOL8 __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 2000), (_QWORD *)a2, 0LL);
}
