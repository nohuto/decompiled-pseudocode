/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x18009CEB0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18006FC98 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce_0 @ 0x18007335C (RtlRunOnceExecuteOnce_0.c)
 */

__int64 __fastcall RtlpQueryDiskSpeedPolicy(_DWORD *a1)
{
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce_0();
    *a1 = RtlpDiskSpeedPolicy;
  }
  return 0LL;
}
