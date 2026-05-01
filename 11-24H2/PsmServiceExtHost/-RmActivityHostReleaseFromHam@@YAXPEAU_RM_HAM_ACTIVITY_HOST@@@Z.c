/*
 * XREFs of ?RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008BA8
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008680 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C850 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmActivityHostReleaseFromHam(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  RmpObjectRelease((PVOID)(((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL)));
}
