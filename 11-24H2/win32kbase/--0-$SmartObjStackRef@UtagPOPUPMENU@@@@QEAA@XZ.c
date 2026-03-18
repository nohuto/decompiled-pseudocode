/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401A2850
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrent((__int64)a1);
  a1[1] = 0LL;
  *a1 = &gSmartObjNullRef;
  a1[1] = *((_QWORD *)v2 + 209);
  *((_QWORD *)v2 + 209) = a1 + 1;
  return a1;
}
