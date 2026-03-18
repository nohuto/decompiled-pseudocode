/*
 * XREFs of xxxSleepThread @ 0x14010A09C
 * Callers:
 *     xxxIsDragging @ 0x140109A1C (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     NtUserWaitAvailableMessageEx @ 0x1402A1C50 (NtUserWaitAvailableMessageEx.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 * Callees:
 *     xxxSleepThread2 @ 0x140063CE4 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxSleepThread(__int64 a1, __int64 a2, int a3, int a4)
{
  return xxxSleepThread2(a1, a2, a3, a4, 0LL);
}
