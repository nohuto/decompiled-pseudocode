/*
 * XREFs of ?cTotalCurves@EPATHOBJ@@QEAAKXZ @ 0x1400F4CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?cTotalCurves@PATH_CORE@@QEBAKXZ @ 0x1400F4D00 (-cTotalCurves@PATH_CORE@@QEBAKXZ.c)
 */

unsigned int __fastcall EPATHOBJ::cTotalCurves(EPATHOBJ *this)
{
  return PATH_CORE::cTotalCurves((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
}
