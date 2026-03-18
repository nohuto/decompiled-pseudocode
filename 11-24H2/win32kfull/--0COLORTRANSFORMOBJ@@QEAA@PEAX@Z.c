/*
 * XREFs of ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1403118E0
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140010370 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x140175D60 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1401782FC (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1401F0610 (BRUSHOBJ_hGetColorTransform.c)
 *     XLATEOBJ_hGetColorTransform @ 0x1402141E0 (XLATEOBJ_hGetColorTransform.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033B0AC (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     NtGdiDeleteColorTransform @ 0x14033BFA0 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FA8F4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

COLORTRANSFORMOBJ *__fastcall COLORTRANSFORMOBJ::COLORTRANSFORMOBJ(COLORTRANSFORMOBJ *this, void *a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v4) = 14;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
