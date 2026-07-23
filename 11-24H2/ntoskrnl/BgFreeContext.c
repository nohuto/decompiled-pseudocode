/*
 * XREFs of BgFreeContext @ 0x140BB2664
 * Callers:
 *     BgkResumeFinished @ 0x140B6E5F4 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 */

__int64 __fastcall BgFreeContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = qword_140E65EC8;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 2u && qword_140E65EC8 )
  {
    BgpFwAcquireLock(a1, a2, a3, a4);
    if ( (dword_140EF0270 & 1) != 0 )
      ResFwFreeContext(v4);
    return BgpFwReleaseLock(v7, v6);
  }
  return result;
}
