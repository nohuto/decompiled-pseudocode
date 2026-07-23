/*
 * XREFs of RtlRcuFree @ 0x1801491B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlRcuFree(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  unsigned int *v4; // rdi
  void *v5; // r8
  _QWORD *v6; // rdi
  void *v7; // r8
  void *ProcessHeap; // rcx

  RtlAcquireSRWLockExclusive(&stru_1801D5CD0);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RtlReleaseSRWLockExclusive(&stru_1801D5CD0);
  v4 = (unsigned int *)a1[3];
  while ( v4 )
  {
    v5 = v4;
    v4 = *(unsigned int **)&v4[2 * *v4 + 2];
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  v6 = (_QWORD *)a1[4];
  while ( 1 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v6 )
      break;
    v7 = v6;
    v6 = (_QWORD *)v6[3];
    RtlFreeHeap(ProcessHeap, 0, v7);
  }
  return RtlFreeHeap(ProcessHeap, 0, a1);
}
