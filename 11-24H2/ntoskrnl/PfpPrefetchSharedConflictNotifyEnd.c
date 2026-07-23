/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x140AA3710
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PfpPrefetchSharedDeref @ 0x1409362B8 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *a1, ULONG_PTR a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = (ULONG_PTR *)a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((__int64)v4, a2);
    KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( a1 )
    PfpPrefetchSharedDeref(a1);
}
