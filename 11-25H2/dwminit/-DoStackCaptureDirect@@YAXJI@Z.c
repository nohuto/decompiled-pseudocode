/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000E6AC
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AAF8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000AED0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000BCD8 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000CDAC (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     DwmpCreateSessionProcess @ 0x18000D640 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogoff @ 0x18000D890 (DwmpNotifyUserLogoff.c)
 *     DwmpNotifyUserLogon @ 0x18000D920 (DwmpNotifyUserLogon.c)
 *     DwmpSignalSessionShutdown @ 0x18000EC0C (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
