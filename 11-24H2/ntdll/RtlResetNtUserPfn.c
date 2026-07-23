/*
 * XREFs of RtlResetNtUserPfn @ 0x1801323D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801E6340 )
    return 3221225485LL;
  if ( !byte_1801D1908 )
  {
    LdrProtectMrdata(0);
    byte_1801E6340 = 0;
    memset64(off_1801E62B0, (unsigned __int64)UninitUser32Proc, 0x12uLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801E61F0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
