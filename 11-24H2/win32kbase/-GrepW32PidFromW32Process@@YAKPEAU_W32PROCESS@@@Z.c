/*
 * XREFs of ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400B7FD4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x1400B788C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GrepW32PidFromW32Process(PEPROCESS *a1)
{
  return PsGetProcessId(*a1);
}
