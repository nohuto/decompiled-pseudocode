/*
 * XREFs of ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x14003DC88
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x14003E0F8 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C0B88 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, struct SURFACE *a2)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  if ( a2 )
  {
    *((_QWORD *)this + 4) = a2;
    HmgIncrementShareReferenceCount(a2);
  }
  return this;
}
