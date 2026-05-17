/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x18010CEAC
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800BF9C0 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010CF24 (RtlpTpIoDllProcessUnloads.c)
 */

__int64 __fastcall RtlpTpIoDllUnloaded(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpTpIoTreeLock, a2, a3);
    v4 = RtlpTpIoTree;
    while ( v4 )
    {
      v5 = *(_QWORD *)(v4 - 96);
      if ( v5 < *(_QWORD *)(a1 + 24) )
        goto LABEL_5;
      if ( v5 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
      }
      if ( v5 < *(_QWORD *)(a1 + 24) )
LABEL_5:
        v4 = *(_QWORD *)(v4 + 16);
      else
        v4 = *(_QWORD *)(v4 + 8);
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}
