/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1400B510C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003C494 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x140100150 (VidSchFlushContext.c)
 *     VidSchFlushHwQueue @ 0x140102CB0 (VidSchFlushHwQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14010652C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x140034A80 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400B5974 (VidSchRegisterCompletionEvent.c)
 */

_BOOL8 __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 2000), (_QWORD *)a2, 0LL);
}
