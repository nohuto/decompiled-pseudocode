/*
 * XREFs of MiPrefetchPagesViable @ 0x140452B14
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiPrefetchNormally @ 0x140452B9C (MiPrefetchNormally.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiPrefetchPagesViable(ULONG *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4, int a5)
{
  __int64 v8; // r9

  if ( !(unsigned int)MiPrefetchNormally(a1, a4) )
    return 0LL;
  if ( a2 )
  {
    if ( *a2 < a4 )
      return 0LL;
    *a2 -= a4;
  }
  if ( !a5 || MiObtainFaultCharges(a1, a4, 1, v8) == a4 )
    return 1LL;
  MiReturnFaultCharges(a1, a4, 1LL);
  return 0LL;
}
