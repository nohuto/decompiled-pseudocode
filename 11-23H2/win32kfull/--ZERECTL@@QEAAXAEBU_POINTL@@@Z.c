/*
 * XREFs of ??ZERECTL@@QEAAXAEBU_POINTL@@@Z @ 0x1C0264EAC
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C006A584 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265C84 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

__int64 __fastcall ERECTL::operator-=(ERECTL *a1, const struct _POINTL *a2)
{
  return ERECTL::bOffsetSubtract(a1, a2, 0);
}
