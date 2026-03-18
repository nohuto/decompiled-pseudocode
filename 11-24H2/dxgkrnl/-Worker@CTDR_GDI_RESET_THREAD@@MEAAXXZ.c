/*
 * XREFs of ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1401D0BA0
 * Callers:
 *     <none>
 * Callees:
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1401CF1A0 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 */

void __fastcall CTDR_GDI_RESET_THREAD::Worker(struct _TDR_RECOVERY_CONTEXT **this)
{
  int v2; // eax
  _VIDEO_WIN32K_CALLBACKS_PARAMS v3; // [rsp+20h] [rbp-28h] BYREF

  v3.PhysDisp = 0LL;
  v3.Param = 0LL;
  *(_QWORD *)&v3.CalloutType = 10LL;
  v3.Status = -1073741816;
  *(_DWORD *)&v3.LockUserSession = 0;
  v2 = CTDR_GDI_RESET_THREAD::GdiCalloutLoop((CTDR_GDI_RESET_THREAD *)this, &v3);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2143420409 )
    TdrBugcheckOnTimeout(this[3], v2, 5);
}
