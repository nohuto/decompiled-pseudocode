/*
 * XREFs of PspCreateSilo @ 0x140A6D570
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PspJobHasChildren @ 0x1406F9694 (PspJobHasChildren.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspFreeStorage @ 0x140A4E844 (PspFreeStorage.c)
 *     PspAllocStorage @ 0x140A6D664 (PspAllocStorage.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v2; // rdi
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v7 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1536) )
  {
    result = PspAllocStorage(&v7);
    if ( (int)result < 0 )
      return result;
    v2 = (_QWORD *)v7;
  }
  PspLockJobExclusive(a1, (__int64)CurrentThread);
  if ( PspJobHasChildren(a1) )
  {
    v5 = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 )
  {
    v5 = -1073740536;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x402000) != 0 )
  {
    v6 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1536), (signed __int64)v2, 0LL) != 0);
    v7 &= v6;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x40000000u);
    v2 = (_QWORD *)v7;
    v5 = 0;
  }
  else
  {
    v5 = -1073741811;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v2 )
    PspFreeStorage(v2);
  return v5;
}
