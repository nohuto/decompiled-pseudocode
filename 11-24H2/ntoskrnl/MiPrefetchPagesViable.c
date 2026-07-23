/*
 * XREFs of MiPrefetchPagesViable @ 0x140449280
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiPrefetchNormally @ 0x140449308 (MiPrefetchNormally.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiPrefetchPagesViable(ULONG *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4, int a5)
{
  struct _KPRCB *v8; // r9

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
