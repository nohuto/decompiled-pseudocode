/*
 * XREFs of ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00BBBE4
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C00BBAF0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C5C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     INC_SHARE_REF_CNT @ 0x1C00417D0 (INC_SHARE_REF_CNT.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D1560 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, struct SURFACE *a2)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  if ( a2 )
  {
    *((_QWORD *)this + 4) = a2;
    INC_SHARE_REF_CNT((unsigned int *)a2);
  }
  return this;
}
