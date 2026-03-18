/*
 * XREFs of ??0DLODCOBJ@@QEAA@XZ @ 0x140038274
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1400381E0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014A5C0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400B8540 (--0XDCOBJ@@QEAA@XZ.c)
 */

DLODCOBJ *__fastcall DLODCOBJ::DLODCOBJ(DLODCOBJ *this)
{
  DLODCOBJ *result; // rax

  XDCOBJ::XDCOBJ(this);
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 40,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 40) >> 64),
    UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  result = this;
  *((_WORD *)this + 36) = 256;
  return result;
}
