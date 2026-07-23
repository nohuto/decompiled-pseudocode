/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x18010F89C
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800C3F50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010F914 (RtlpTpIoDllProcessUnloads.c)
 */

void __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // r8
  unsigned __int64 Parent; // rcx

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      Parent = (unsigned __int64)v2[-4].Parent;
      if ( Parent < *(_QWORD *)(a1 + 24) )
        goto LABEL_5;
      if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        break;
      }
      if ( Parent < *(_QWORD *)(a1 + 24) )
LABEL_5:
        v2 = v2->RightChild;
      else
        v2 = v2->LeftChild;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
}
