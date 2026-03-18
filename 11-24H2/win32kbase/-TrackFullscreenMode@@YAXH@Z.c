/*
 * XREFs of ?TrackFullscreenMode@@YAXH@Z @ 0x14014D6C8
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall TrackFullscreenMode(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v2; // rcx

  if ( (_DWORD)a1 )
  {
    v1 = PtiCurrent(a1);
    *(_QWORD *)(W32GetUserSessionState(v2) + 43280) = *((_QWORD *)v1 + 58);
  }
  else
  {
    *(_QWORD *)(W32GetUserSessionState(a1) + 43280) = 0LL;
  }
}
