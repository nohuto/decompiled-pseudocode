/*
 * XREFs of ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC
 * Callers:
 *     GreGetClipBox @ 0x1C00389B0 (GreGetClipBox.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetNearestColor @ 0x1C005FC20 (GreGetNearestColor.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C015459C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0155B08 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0155FD8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C015AC20 (pProcessDfbSurfacesInternal.c)
 *     GreSetMagicColors @ 0x1C016C72C (GreSetMagicColors.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0156138 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall DLODCOBJ::~DLODCOBJ(DLODCOBJ *this)
{
  if ( *(_QWORD *)this )
    DLODCOBJ::vUnlock(this);
  PopThreadGuardedObject((_QWORD *)this + 2);
}
