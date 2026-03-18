/*
 * XREFs of ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1400B8070
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x1400B788C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vUnlockSingleThread(W32PIDLOCK *this)
{
  KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)this + 5) + 64LL), 0);
}
