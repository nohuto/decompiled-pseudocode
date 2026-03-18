/*
 * XREFs of ??C?$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ @ 0x1C01B8218
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator->(__int64 a1)
{
  return **(_QWORD **)a1;
}
