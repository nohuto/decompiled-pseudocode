/*
 * XREFs of RtlpTpIoDllLoaded @ 0x1800BF9D8
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800BF9C0 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TpDereferenceGlobalPool @ 0x18006F5F8 (TpDereferenceGlobalPool.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     RtlDelete @ 0x1800BFCE0 (RtlDelete.c)
 */

__int64 __fastcall RtlpTpIoDllLoaded(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  v4 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpTpIoTreeLock, a2, a3);
  v5 = RtlpTpIoTree;
  while ( 1 )
  {
    v6 = (_QWORD *)v5;
    if ( !v5 )
      break;
    v7 = v5 - 96;
    v8 = *(_QWORD *)(v5 - 96);
    if ( v8 < *(_QWORD *)(a1 + 24) )
      goto LABEL_4;
    if ( v8 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( v8 < *(_QWORD *)(a1 + 24) )
LABEL_4:
        v5 = *(_QWORD *)(v5 + 16);
      else
        v5 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v5 = RtlDelete(v5);
      RtlpTpIoTree = v5;
      *v6 = v4;
      v4 = v7;
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v4 )
  {
    v10 = *(_QWORD *)(v4 + 96);
    TpDereferenceGlobalPool(*(_QWORD *)(v4 + 80));
    RtlFreeAnsiString((PUNICODE_STRING)(v4 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    v4 = v10;
  }
  return result;
}
