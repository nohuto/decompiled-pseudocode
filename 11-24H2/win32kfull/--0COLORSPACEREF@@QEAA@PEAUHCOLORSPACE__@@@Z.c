/*
 * XREFs of ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1400C14F4
 * Callers:
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1400C1408 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     NtGdiSetColorSpace @ 0x14033C420 (NtGdiSetColorSpace.c)
 * Callees:
 *     <none>
 */

COLORSPACEREF *__fastcall COLORSPACEREF::COLORSPACEREF(COLORSPACEREF *this, HCOLORSPACE a2)
{
  __int64 v4; // rdx

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    this,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v4) = 9;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
