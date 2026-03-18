/*
 * XREFs of CcRepinBcb @ 0x14049D260
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall CcRepinBcb(PVOID Bcb)
{
  __int64 v2; // rcx

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x2628uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquireFastMutex((PKGUARDED_MUTEX)(*((_QWORD *)Bcb + 22) + 288LL));
  v2 = *((_QWORD *)Bcb + 22);
  ++*((_DWORD *)Bcb + 16);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 288));
}
