/*
 * XREFs of ??0SURFREFDC@@QEAA@XZ @ 0x1C028E06C
 * Callers:
 *     GreDrawStream @ 0x1C00FA480 (GreDrawStream.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ @ 0x1C013E7E4 (--0-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ.c)
 */

SURFREFDC *__fastcall SURFREFDC::SURFREFDC(SURFREFDC *this)
{
  UnexpectedThreadTerminationHandler<SURFREFDC>::UnexpectedThreadTerminationHandler<SURFREFDC>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
