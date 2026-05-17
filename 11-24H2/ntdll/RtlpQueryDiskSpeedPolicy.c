/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x18011AF2C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x1800A9730 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 *     RtlGetSuiteMask @ 0x1800AAA10 (RtlGetSuiteMask.c)
 */

__int64 __fastcall RtlpQueryDiskSpeedPolicy(_DWORD *a1)
{
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(
      &RtlpDiskSpeedInit,
      (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpDiskSpeedInitialize,
      0LL,
      0LL);
    *a1 = RtlpDiskSpeedPolicy;
  }
  return 0LL;
}
