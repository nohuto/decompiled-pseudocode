/*
 * XREFs of RtlRcuFree @ 0x1801491B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlRcuFree(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // r9
  unsigned int *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r8
  void *ProcessHeap; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D5CD0);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RtlReleaseSRWLockExclusive(&qword_1801D5CD0);
  v5 = (unsigned int *)a1[3];
  while ( v5 )
  {
    v6 = (__int64)v5;
    v5 = *(unsigned int **)&v5[2 * *v5 + 2];
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6, v4);
  }
  v7 = a1[4];
  while ( 1 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v7 )
      break;
    v8 = v7;
    v7 = *(_QWORD *)(v7 + 24);
    RtlFreeHeap((__int64)ProcessHeap, 0, v8, v4);
  }
  return RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)a1, v4);
}
