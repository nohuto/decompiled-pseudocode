/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C013897C
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 *     xxxDesktopThreadWaiter @ 0x1C002B130 (xxxDesktopThreadWaiter.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C01266D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRemoteReconnect @ 0x1C0131F08 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C0213134 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
{
  EnterCrit(1LL, 0LL);
}
