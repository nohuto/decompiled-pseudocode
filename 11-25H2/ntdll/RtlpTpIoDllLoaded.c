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

__int64 __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpTpIoTreeLock);
  v3 = RtlpTpIoTree;
  while ( 1 )
  {
    v4 = (_QWORD *)v3;
    if ( !v3 )
      break;
    v5 = v3 - 96;
    v6 = *(_QWORD *)(v3 - 96);
    if ( v6 < *(_QWORD *)(a1 + 24) )
      goto LABEL_4;
    if ( v6 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( v6 < *(_QWORD *)(a1 + 24) )
LABEL_4:
        v3 = *(_QWORD *)(v3 + 16);
      else
        v3 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = v3;
      *v4 = v2;
      v2 = v5;
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v2 )
  {
    v11 = *(_QWORD *)(v2 + 96);
    TpDereferenceGlobalPool(*(_QWORD *)(v2 + 80), v8, v9);
    RtlFreeAnsiString((PUNICODE_STRING)(v2 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2, v10);
    v2 = v11;
  }
  return result;
}
