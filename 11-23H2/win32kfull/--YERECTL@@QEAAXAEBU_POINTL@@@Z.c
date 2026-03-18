/*
 * XREFs of ??YERECTL@@QEAAXAEBU_POINTL@@@Z @ 0x1C0264E94
 * Callers:
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011C144 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 * Callees:
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265BE8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

__int64 __fastcall ERECTL::operator+=(ERECTL *a1, const struct _POINTL *a2)
{
  return ERECTL::bOffsetAdd(a1, a2, 0);
}
