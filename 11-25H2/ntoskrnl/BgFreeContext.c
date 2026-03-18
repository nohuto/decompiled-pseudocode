/*
 * XREFs of BgFreeContext @ 0x140BA0664
 * Callers:
 *     BgkResumeFinished @ 0x140B5DC74 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 */

__int64 BgFreeContext()
{
  PVOID v0; // rbx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  v0 = qword_140E65B28;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 2u && qword_140E65B28 )
  {
    BgpFwAcquireLock();
    if ( (dword_140EEFD90 & 1) != 0 )
      ResFwFreeContext(v0);
    return BgpFwReleaseLock(v3, v2);
  }
  return result;
}
