/*
 * XREFs of ?RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180063270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RmpWnfPublishMessageToClientStateNameWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  char *v3; // rsi
  char *v5; // rbx
  char v6; // bl
  __int64 v7; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v3 = a2 + 24;
LABEL_2:
  RtlAcquireSRWLockExclusive(v3);
  v5 = *(char **)a2;
  if ( *(char **)a2 != a2 )
  {
    if ( *((char **)v5 + 1) != a2 || (v7 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(v7 + 8) = a2;
    *(_OWORD *)v5 = 0LL;
    RtlReleaseSRWLockExclusive(v3);
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)RtlWaitForWnfMetaNotification(*((_QWORD *)v5 + 2), 8LL, 15000LL, 1000LL, &v8) != 258 )
      {
        RtlPublishWnfStateData(*((_QWORD *)v5 + 2), 0LL, v5 + 28, *((unsigned int *)v5 + 6), 0LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        goto LABEL_2;
      }
      RtlAcquireSRWLockExclusive(v3);
      if ( a2[33] )
        break;
      RtlReleaseSRWLockExclusive(v3);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  v6 = a2[33];
  a2[32] = 0;
  RtlReleaseSRWLockExclusive(v3);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}
