/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x18011C910
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180038570 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlGetSuiteMask @ 0x180039850 (RtlGetSuiteMask.c)
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
