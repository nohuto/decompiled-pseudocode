/*
 * XREFs of ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14010FD70
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(_QWORD *a1, void *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent((__int64)a1);
  *a1 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = a1;
  a1[2] = CompositionObject::Release;
  a1[1] = a2;
  if ( a2 )
    ObfReferenceObject(a2);
  return a1;
}
