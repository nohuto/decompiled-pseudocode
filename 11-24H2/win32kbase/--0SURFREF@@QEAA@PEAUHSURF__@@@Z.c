/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14000DEDC
 * Callers:
 *     bDfbSurfacesMigrated @ 0x14000CB70 (bDfbSurfacesMigrated.c)
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1400146F8 (-vCleanupSurfaces@@YAXK@Z.c)
 *     _SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C2980 (_SURFREF--vTryDeleteSurface_--_8_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401C3E10 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C0B88 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
