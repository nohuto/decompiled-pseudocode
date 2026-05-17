/*
 * XREFs of RtlResetNtUserPfn @ 0x1801341A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801E7340 )
    return 3221225485LL;
  if ( !byte_1801D2908 )
  {
    LdrProtectMrdata(0);
    byte_1801E7340 = 0;
    memset64(off_1801E72B0, (unsigned __int64)UninitUser32Proc, 0x12uLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801E71F0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
