/*
 * XREFs of ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1400B7FA0
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vLockSingleThread(W32PIDLOCK *this)
{
  KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 5) + 64LL), UserRequest, 0, 0, 0LL);
}
