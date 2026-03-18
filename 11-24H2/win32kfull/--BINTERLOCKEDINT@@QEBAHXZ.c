/*
 * XREFs of ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC
 * Callers:
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14003D46C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxGetInputEvent @ 0x140064510 (xxxGetInputEvent.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x140064D40 (xxxMsgWaitForMultipleObjectsEx.c)
 *     NtUserGetQueueStatus @ 0x140065820 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x140065B90 (_GetQueueStatus.c)
 *     xxxDesktopThreadWaiter @ 0x140066AC4 (xxxDesktopThreadWaiter.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x14009E630 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14012E354 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     TransferWakeBit @ 0x14012E5F8 (TransferWakeBit.c)
 *     SlowAppThreadInShellFrame @ 0x140155EA4 (SlowAppThreadInShellFrame.c)
 *     NtUserGetQueueStatusReadonly @ 0x140166FE0 (NtUserGetQueueStatusReadonly.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167D6C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401C8EA8 (xxxWaitForDITMouseInjectionFlush.c)
 *     IncPaintCountInterMoveSize @ 0x1402D21A0 (IncPaintCountInterMoveSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall INTERLOCKEDINT::operator int(unsigned int *a1)
{
  return *a1;
}
