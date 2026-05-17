/*
 * XREFs of RtlResetNtUserPfn @ 0x1801221A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x1800DEC30 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801E9210 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_1801E9210 = 0;
    memset64(off_1801E9180, (unsigned __int64)UninitUser32Proc, 0x12uLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801E90C0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
