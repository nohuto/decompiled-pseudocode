/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000EEE8
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AC58 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000B030 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000C128 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000D2CC (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     DwmpCreateSessionProcess @ 0x18000DDB0 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogoff @ 0x18000E000 (DwmpNotifyUserLogoff.c)
 *     DwmpNotifyUserLogon @ 0x18000E090 (DwmpNotifyUserLogon.c)
 *     DwmpSignalSessionShutdown @ 0x18000F44C (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
