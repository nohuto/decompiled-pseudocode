/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x18010F89C
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800C3F50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010F914 (RtlpTpIoDllProcessUnloads.c)
 */

__int64 __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      v3 = *(_QWORD *)(v2 - 96);
      if ( v3 < *(_QWORD *)(a1 + 24) )
        goto LABEL_5;
      if ( v3 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
      }
      if ( v3 < *(_QWORD *)(a1 + 24) )
LABEL_5:
        v2 = *(_QWORD *)(v2 + 16);
      else
        v2 = *(_QWORD *)(v2 + 8);
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}
