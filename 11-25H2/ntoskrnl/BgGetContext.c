/*
 * XREFs of BgGetContext @ 0x140BA06A8
 * Callers:
 *     BgkResumePrepare @ 0x140B4368C (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x140BA19D8 (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v1 = 0LL;
  v4 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140EEFD90 & 1) != 0 )
  {
    ResFwGetContext(&v4);
    v1 = v4;
  }
  BgpFwReleaseLock(v3, v2);
  return v1;
}
