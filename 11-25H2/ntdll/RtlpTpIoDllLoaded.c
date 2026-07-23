/*
 * XREFs of RtlpTpIoDllLoaded @ 0x1800C3F68
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800C3F50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TpDereferenceGlobalPool @ 0x18003DB58 (TpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     RtlDelete @ 0x1800C4270 (RtlDelete.c)
 */

void __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rbx
  PRTL_SPLAY_LINKS v3; // rcx
  _QWORD *p_Parent; // r14
  PRTL_SPLAY_LINKS v5; // rdi
  unsigned __int64 Parent; // rdx
  _RTL_SPLAY_LINKS *v7; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v3 = RtlpTpIoTree;
  while ( 1 )
  {
    p_Parent = &v3->Parent;
    if ( !v3 )
      break;
    v5 = v3 - 4;
    Parent = (unsigned __int64)v3[-4].Parent;
    if ( Parent < *(_QWORD *)(a1 + 24) )
      goto LABEL_4;
    if ( Parent >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( Parent < *(_QWORD *)(a1 + 24) )
LABEL_4:
        v3 = v3->RightChild;
      else
        v3 = v3->LeftChild;
    }
    else
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = v3;
      *p_Parent = v2;
      v2 = v5;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v2 )
  {
    v7 = v2[4].Parent;
    TpDereferenceGlobalPool((__int64)v2[3].LeftChild);
    RtlFreeAnsiString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v7;
  }
}
