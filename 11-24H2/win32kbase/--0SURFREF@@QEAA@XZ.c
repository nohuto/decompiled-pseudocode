/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x140036A88
 * Callers:
 *     GreSetBitmapOwner @ 0x140036530 (GreSetBitmapOwner.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     EngLockSurface @ 0x140036810 (EngLockSurface.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140038400 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     EngAssociateSurface @ 0x1400C6970 (EngAssociateSurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1401044E0 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     EngModifySurface @ 0x140104550 (EngModifySurface.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE1E0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C0B88 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
